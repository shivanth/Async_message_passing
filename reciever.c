#include<reciever.h>



/*Copies data from a buffer pointer to the internal buffer of the reciever specified*/
int copy_2_reciever(reciever * rcvr,void * mem,int size){
  rcvr->size=size;
  rcvr->buff=(char*)malloc(size);
  memcpy(rcvr->buff,mem,size);
}

