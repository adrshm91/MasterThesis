#include <Python.h>

// #include "amecommunication_socket.h"
#include "amecommunication_shm.h"

double *copyPyListToBuffer(PyObject *list)
{
   int i, size;
   double *output;
   PyObject *tmp_obj;

   if(!PyList_Check(list))
      return NULL;
   size = PyList_Size(list);
   if(size == 0)
      return NULL;
   
   output = (double *)calloc((size_t)size, sizeof(double));
   for(i = 0; i < size; i++)
   {
      tmp_obj = PyList_GetItem(list, i);
      if(PyFloat_Check(tmp_obj))
      {
         output[i] = PyFloat_AsDouble(tmp_obj);
      }
      else if(PyLong_Check(tmp_obj))
      {
         output[i] = (double)PyLong_AsLong(tmp_obj);
      }
      else
      {
         free(output);
         return NULL;
      }
   }
   return output;
}

PyObject *copyBufferToPyList(double *vec, int size)
{
   int i;
   PyObject *list, *tmp_obj;
   list = PyList_New(0);
   if(!PyList_Check(list))
      return NULL;
   for(i = 0; i < size; i++)
   {
      tmp_obj = PyFloat_FromDouble(vec[i]);
      PyList_Append(list, tmp_obj);
      Py_DECREF(tmp_obj);
   }
   return list;
}

// static PyObject * amecommunication_sockinit(PyObject *self, PyObject *args)
// {
//    char *server_name;
//    int isserver, port, input_size, output_size, ret;
//    amesock_conn_attributes * connection;

//    connection = NULL;
//    if (!PyArg_ParseTuple(args, "isiii", &isserver, &server_name, &port, &input_size, &output_size))
//       return NULL;

//    connection = (amesock_conn_attributes *)malloc(sizeof(amesock_conn_attributes));
//    ret = amesock_init(connection, isserver, server_name, port, input_size, output_size);

//    return Py_BuildValue("ii", ret, (long)(connection));
// }

// static PyObject * amecommunication_sockexchange(PyObject *self, PyObject *args)
// {
//    int connec, ret;
//    PyObject *input, *output, *return_val;
//    amesock_conn_attributes *connection;
//    double *input_vec, *output_vec;

//    if (!PyArg_ParseTuple(args, "iO", &connec, &input))
//       return NULL;
   
//    connection = (amesock_conn_attributes *)connec;

//    input_vec = copyPyListToBuffer(input);
//    if(input_vec == NULL)
//    {
//       return NULL;
//    }
//    output_vec = (double *)calloc((size_t)connection->outputSize, sizeof(double));
//    ret = amesock_exchange(connection, input_vec, output_vec);
   
//    output = copyBufferToPyList(output_vec, connection->outputSize);
//    return_val = Py_BuildValue("iO", ret, output);
//    Py_DECREF(output);
//    return return_val;
// }

// static PyObject * amecommunication_sockclose(PyObject *self, PyObject *args)
// {
//    int connec, ret;
//    amesock_conn_attributes *connection;
   
//    if (!PyArg_ParseTuple(args, "i", &connec))
//       return NULL;

//    connection = (amesock_conn_attributes *)connec;
//    ret = amesock_close(connection);
//    free(connection);
//    return Py_BuildValue("i", ret);
// }


/********************************************************
 *      COMMUNICATION THROW SHARED MEMORY               *
 ********************************************************/
 ameshm_conn_attributes * connection;

 static PyObject * amecommunication_shminit(PyObject *self, PyObject *args)
{
   char *name;
   int ismaster, input_size, output_size, ret;
   // ameshm_conn_attributes * connection;

   connection = NULL;
   if (!PyArg_ParseTuple(args, "isii", &ismaster, &name, &input_size, &output_size))
      return NULL;
   // connection = (ameshm_conn_attributes *)malloc(sizeof(ameshm_conn_attributes));
   connection = malloc(sizeof(ameshm_conn_attributes));
   ret = ameshm_init(connection, ismaster, name, input_size, output_size);
   return Py_BuildValue("ii", ret, (long)(connection));
}

static PyObject* amecommunication_shmexchange(PyObject* self, PyObject* args)
{
   int connec, ret;
   
   PyObject *input, *output, *return_val;
   // ameshm_conn_attributes *connection;
   
   double *input_vec, *output_vec;


   if (!PyArg_ParseTuple(args, "iO", &connec, &input))
      return NULL;
   

   // connection = (ameshm_conn_attributes *)connec;
   input_vec = copyPyListToBuffer(input);

   if(input_vec == NULL)
   {
      free(input_vec);
      return NULL;
   }
   output_vec = (double *)calloc((size_t)connection->outputSize, sizeof(double));
   ret = ameshm_exchange(connection, input_vec, output_vec);
   
   output = copyBufferToPyList(output_vec, connection->outputSize);
   return_val = Py_BuildValue("iO", ret, output);
   Py_DECREF(output);
   return return_val;
}

static PyObject * amecommunication_shmclose(PyObject *self, PyObject *args)
{
   int connec, ret;
   // ameshm_conn_attributes *connection;
   
   if (!PyArg_ParseTuple(args, "i", &connec))
      return NULL;

   // connection = (ameshm_conn_attributes *)connec;
   ret = ameshm_close(connection);
   free(connection);
   return Py_BuildValue("i", ret);
}


static PyMethodDef AmecommunicationMethods[] = {
   // {"sockinit",  amecommunication_sockinit, METH_VARARGS,
   // "Initialize socket connection."},
   // {"sockexchange",  amecommunication_sockexchange, METH_VARARGS,
   // "Exchange datas throw socket connection."},
   // {"sockclose",  amecommunication_sockclose, METH_VARARGS,
   // "Close socket connection."},
   {"shminit",  amecommunication_shminit, METH_VARARGS,
   "Initialize sharedmemory connection."},
   {"shmexchange",  amecommunication_shmexchange, METH_VARARGS,
   "Exchange datas throw sharedmemory connection."},
   {"shmclose",  amecommunication_shmclose, METH_VARARGS,
   "Close sharedmemory connection."},
   {NULL, NULL, 0, NULL}        /* Sentinel */
};


static struct PyModuleDef Amecommunicationdef = {
        PyModuleDef_HEAD_INIT,
        "binding_amecommunication",     /* m_name */
        "This is binding_amecommunication module",  /* m_doc */
        -1,                  /* m_size */
        AmecommunicationMethods,    /* m_methods */
        NULL,                /* m_reload */
        NULL,                /* m_traverse */
        NULL,                /* m_clear */
        NULL,                /* m_free */
    };



PyMODINIT_FUNC PyInit_binding_amecommunication(void)
{
   PyObject *m;

   m = PyModule_Create(&Amecommunicationdef);
   // m = Py_InitModule("binding_amecommunication", AmecommunicationMethods);

}

