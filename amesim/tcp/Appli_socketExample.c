/** This source file demonstrates the usage of libcosim to exchange values 
 * between AMESim and an extern C executable with TCP/IP */
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <Python.h>

#include "amecommunication_socket.h"

#define MAX_LINE_LENGTH 4096




static PyObject * initiate_connection(PyObject *self, PyObject *args)
{
   int ret;
   double input_value;
   int numberOfInputs=1, numberOfOutputs=1;
   double *input, *output;
   double local_time, next_meeting_time=-1., time_step=.001;
   amesock_conn_attributes socket_id;
   char *server_name;
   int server_port;

   // if(argc != 3)
   // {
   //    printf("usage: Appli_socketExample server_name port\n");
   //    return -1;
   // }

   if (!PyArg_ParseTuple(args, "siiidd", &server_name, &server_port, &numberOfInputs, &numberOfOutputs, &time_step, &input_value))
      return NULL;

   printf("Attempt to connect to %s:%d with 1 inputs, 1 outputs\n", server_name, server_port));

   /* the number of input/output takes into account 2 extra values : the next meeting point and local time.
    * that's why nb_input and nb_output are not equal to 1 but 3. */

   /* AMESim network submodels behaves this way:
    * Exchanges are synchronized. Master sets up date called meeting point, and then both exectuables 
    * are supposed to call amesock_exchange at these dates
    * if AMESim model is configured as master: it set up next meeting point and expects the compagnion 
    * executable to call amesock_exchange on next meeting point so that datas can be exchanged at this
    * date.
    * if slave: it receives next meeting point from compagnion and will call amesock_exchange when AMESim time
    * reach next meeting point. Obviously, master must also called amesock_exchange when it reaches next meeting
    * point */
   
	if(amesock_init(&socket_id,   /* socket identifier */
            0,                   /* this socket is not server : it will receives meeting points from server */
            server_name,             /* server name */
            server_port,       /* server port */
            numberOfInputs + 2,                   /* number of data to send through the socket (nb_input + 2)*/
            numberOfOutputs + 2                    /* number of data receives from socket (nb_output + 2) */
            )!=SUCCESS)
   {
      printf("failed to initialize socket\n");
      return -1;
   }

   printf("Connection initialized.\n");

   input = (double *)calloc(2+numberOfInputs, sizeof(double));
   output = (double *)calloc(2+numberOfOutputs, sizeof(double));
   input[0] = 0; /* input[0] is for next_meeting point. It has no influence since we are not master */
   
   printf("next meeting\tdistant time\tvalue\n");
   for(local_time = 0; local_time < 10; local_time += time_step)
   {
      if(local_time > next_meeting_time)
      {
         input[1] = local_time;           /* input[1] contains the local time */
         input[2] = input_value; 		  /* value to exchange */
         if((ret = amesock_exchange(&socket_id, input, output))==SUCCESS)
         {
            /* ouput contains : output[0]: next meeting point, output[1]: distant time, output[2]: exchanged value */
            next_meeting_time = output[0];   /* next meeting point from master */
            printf("%lf\t%lf\t%lf\n", output[0], output[1], output[2]);
         }
         else
         {
            if(ret == CONNECTION_SHUTDOWN)
               printf("simulation terminated\n");
            else
               printf("an error occurs while data exchange\n");
            break;
         }
      }
   }


   /* close connection */
   amesock_close(&socket_id);

   free(input);
   free(output);
   return 0;
}
