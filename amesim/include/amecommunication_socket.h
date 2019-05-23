#ifndef __AMECOMMUNICATION_SOCKET_H__
#define __AMECOMMUNICATION_SOCKET_H__

#include "amesocket.h"
#include "amecommunication.h"


/** attributes needed by socket submodels */
typedef struct {
   AME_CLIENTSERVER_INFO sockComm;   /* MPI connection identifier */
   int isServer;        /* tells whether the submodels belongs to the master */
   int isConnected;     /* tells whether the connection has been initialized */
   int outputSize;      /* number of submodel outputs */
   int inputSize;       /* number of submodel inputs */
   int slave_pid;       /* process id of the slave executable */
   struct soap *soap;          /* pointer to a soap structure */
   char *server;
   int isoutputredirected;
} amesock_conn_attributes;

int amesock_init(amesock_conn_attributes *connection, int isserver, char *server_name, int port,
                 int input_size, int output_size);
int amesock_exchange(amesock_conn_attributes *connection, double *input, double *output);
int amesock_close(amesock_conn_attributes *connection);




#endif /*__AMECOMMUNICATION_SOCKET_H__ */
