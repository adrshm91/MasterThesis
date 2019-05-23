#ifndef __RTAPIW32_H__
#define __RTAPIW32_H__


#define _WIN32_WINNT 0x0500

#include <windows.h>
#include <process.h>
#include <winbase.h>

#define CLOCK_FASTEST NULL
#define RT_PRIORITY_MAX 0

typedef HANDLE CLOCK;

struct myTimer {
   HANDLE timer;
   void * completion_routine;
   void * argto_completion_routine;
};

static LARGE_INTEGER time_ref;
static LARGE_INTEGER timer_freq;

HANDLE RtCreateSharedMemory(
   DWORD flProtect,
   DWORD MaximumSizeHigh,
   DWORD MaximumSizeLow,
   LPCTSTR lpName,
   VOID ** location
   );

HANDLE RtCreateMutex(
  LPSECURITY_ATTRIBUTES lpMutexAttributes,
                       /* pointer to security attributes */
  BOOL bInitialOwner,  /* flag for initial ownership */
  LPCTSTR lpName       /* pointer to mutex-object name */
  );

DWORD RtWaitForSingleObject(
  HANDLE hHandle,        /* handle to object to wait for */
  DWORD dwMilliseconds   /* time-out interval in milliseconds */
  );

DWORD RtWaitForMultipleObjects(
  DWORD nCount,             /* number of handles in the handle array */
  CONST HANDLE *lpHandles,  /* pointer to the object-handle array */
  BOOL fWaitAll,            /* wait flag */
  DWORD dwMilliseconds      /* time-out interval in milliseconds */
);


BOOL RtReleaseMutex(
  HANDLE hMutex   /* handle to mutex object */
  );

BOOL RtGetClockTime(CLOCK Clock, PLARGE_INTEGER pTime);

BOOL RtSetClockTime(CLOCK Clock, PLARGE_INTEGER pTime);

HANDLE RtCreateEvent(
  LPSECURITY_ATTRIBUTES lpEventAttributes,
                      /* pointer to security attributes */
  BOOL bManualReset,  /* flag for manual-reset event */
  BOOL bInitialState, /* flag for initial state */
  LPCTSTR lpName      /* pointer to event-object name */
);

BOOL RtSetEvent(
  HANDLE hEvent   /* handle to event object */
  );

BOOL RtResetEvent( HANDLE hEvent);

struct myTimer * RtCreateTimer(
   PSECURITY_ATTRIBUTES pThreadAttributes,
   ULONG StackSize,
   VOID * Routine,
   PVOID Context,
   ULONG Priority,
   CLOCK Clock);

BOOL RtSetTimerRelative(
   HANDLE hTimer,
   PLARGE_INTEGER pExpiration,
   PLARGE_INTEGER pInterval
   );

void RtSleepFt(PLARGE_INTEGER time);


BOOL RtCloseHandle(
  HANDLE hObject   /* handle to object to close */
  );


BOOL RtSetThreadPriority(
  HANDLE hThread, /* handle to the thread */
  int nPriority   /* thread priority level */
  );


#endif /*__RTAPIW32_H__ */

