#ifndef _RECEIVER_H
#define _RECEIVER_H

void Receiver_init(const char* localPort,pthread_mutex_t* plistAddOrRemoveMutex);
void Receiver_shutDown(void);


#endif