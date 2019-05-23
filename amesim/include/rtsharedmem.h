#ifndef __RTSHAREDMEM_H__
#define __RTSHAREDMEM_H__

#ifdef WIN32

#include "windows.h"

typedef struct {
   void *ptr;
   HANDLE hShm;
   HANDLE hMut;
   HANDLE unreadValuesEvent;
   char * nameShm;
   char * nameMut;
   unsigned int nbValues;
} MemMap;

#else

#include <pthread.h>

#ifdef NOPOSIXSHM

typedef struct {
   int nbaccess;
   double data[1];
} SharedData;

typedef struct {
   SharedData *shared_data;
   int hShm;
   int mut;
   int unreadValuesCond;
   char * nameShm;
   char * nameMut;
   unsigned int nbValues;
} MemMap;

#else

typedef struct {
   pthread_mutex_t mut;
   pthread_cond_t unreadValuesCond;
   int unreadValues;
   int nbaccess;
   double data[1];
} SharedData;

typedef struct {
   SharedData *shared_data;
   int hShm;
   char * nameShm;
   char * nameMut;
   unsigned int nbValues;
} MemMap;

#endif

#endif /*WIN32 */

MemMap* RtOpenSharedMem(unsigned int nbvalues, const char * name, int force_creation);
int RtWriteSharedMem(MemMap * shared_mem, const double * data);
int RtTryReadSharedMem(double * data, MemMap * shared_mem);
int RtReadSharedMem(double * data, MemMap * shared_mem);
int RtCloseSharedMem(MemMap * shared_mem);
int RtWaitForUnreadValues(MemMap * shared_mem);

#endif /*__RTSHAREDMEM_H__ */
