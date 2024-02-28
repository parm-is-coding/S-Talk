#ifndef _RECEIVER_H
#define _RECEIVER_H
#include <pthread.h>

void Receiver_init(const char* localPort,pthread_mutex_t* plistAddRemoveMutex,pthread_cond_t* pEndCond,pthread_mutex_t* pmainMutex);
void Receiver_shutDown(void);


#endif