#include<reciever.h>




int copy_to_reciever(reciever * rcvr,void * mem,int size){
  rcvr->size=size;
  rcvr->buff=(char*)malloc(size);
  memcpy(rcvr->buff,mem,size);
}

