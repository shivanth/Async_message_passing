#ifndef RECIEVER_H
#define RECIEVER_H
#include<unistd.h>
#include<string.h>
#include<stdlib.h>



typedef struct {
  int id;
  char * buff;
  //int lock;
  int size;
}reciever;


#endif
