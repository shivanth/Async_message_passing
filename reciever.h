#ifndef RECIEVER_H
#define RECIEVER_H
#include<unistd.h>
#include<string.h>
#include<stdlib.h>
#include<pthread.h>


typedef struct {
  int id;
  char * buff;
  //int lock;
  int size;
  void * (*callback)(void*);
}reciever;


#endif
