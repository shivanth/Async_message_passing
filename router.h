#ifndef ROUTER_H
#define ROUTER_H
#include<unistd.h>
#include<reciever.h>
#include<list.h>
#include<sender.h>

typedef struct{
  int id;
  char * buff;
  //int lock;
  struct list_head rcv_list;
  //reciever r;
  size_t size;
}router;

typedef struct {

  reciever *  rcvr;
  struct list_head lh;
}reciever_pointer;





#endif
