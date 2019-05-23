#ifndef __AMECOMMUNICATION_SHM_H__
#define __AMECOMMUNICATION_SHM_H__

#include "rtsharedmem.h"
#include "amecommunication.h"

/** attributes needed by mpi submodels */
typedef struct {
   MemMap *shm_mts;     /* queue identifier master to slave */
   MemMap *shm_stm;     /* queue identifier slave to master */
   int isMaster;        /* tells whether the submodels belongs to the master */
   int isConnected;     /* tells whether the connection has been initialized */
   int outputSize;      /* number of submodel outputs */
   int inputSize;       /* number of submodel inputs */
   char *name;          /* identifier for the shm */
} ameshm_conn_attributes;

int ameshm_init(ameshm_conn_attributes *connection, int ismaster, char *name, int input_size, int output_size);
int ameshm_exchange(ameshm_conn_attributes *connection, double *input, double *output);
int ameshm_close(ameshm_conn_attributes *connection);

#endif /*__AMECOMMUNICATION_SHM_H__ */
