#include<router.h>

int init_router(router * rtr){
  INIT_LIST_HEAD(&(rtr->rcv_list));
}
int transfer_router_2_reciever(router * rtr,reciever *  rcvr){
  copy_to_reciever(rcvr,rtr->buff,rtr->size);
}

int attach_reciever(router * rtr,reciever_pointer *rcvr){
  list_add(&(rtr->rcv_list),&(rcvr->lh));
}

int transfer_writer_2_router(writer * wrtr,router *  rtr){
  copy_to_router(&rtr,wrtr->buff,wrtr->size);
}

int copy_to_router(router * rtr,void * mem,size_t size){
  rtr->size=size;
  if(rtr->buff!=NULL)
    free(rtr->buff);
  rtr->buff=(char*)malloc(size);
  memcpy(rtr->buff,mem,size);
}
