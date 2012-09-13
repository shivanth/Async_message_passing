#ifndef SENDER_H
#define SENDER_H
#include<unistd.h>
#include<router.h>
#include "list.h"




typedef struct {

  int id;
  size_t size;
  char * buff;
}writer;
#endif
