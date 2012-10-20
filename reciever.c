#include<reciever.h>

  pthread_t id;

/*Copies data from a buffer pointer to the internal buffer of the reciever specified*/
int copy_2_reciever(reciever * rcvr,void * mem,int size){
  rcvr->size=size;
  rcvr->buff=(char*)malloc(size);
  memcpy(rcvr->buff,mem,size);
}

int reply_2_sender(reciever* rcvr,void * buff){

  int ret;
  ret=pthread_create(&id,NULL,rcvr->callback,NULL);

  if(ret<0)
    return -1;
  //pthread_join(id,NULL);
  //pthread_detach(id);
  
 

}
