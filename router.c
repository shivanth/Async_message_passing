#include<router.h>


/*Initialises the router data structure*/
int init_router(router * rtr){
  rtr->buff=NULL;
  INIT_LIST_HEAD(&(rtr->rcv_list));
}

/*Upon calling this function , the data in the buffer of router gets tranfered to the recievers in the reciever list of the router
calls transfer_router_2_reciever
*/
int distribute_router_2_reciever(router * rtr){
  struct list_head * ptr;
  reciever_pointer *rcvr_p;
  list_for_each(ptr,&(rtr->rcv_list)){
      rcvr_p=list_entry(ptr,reciever_pointer,lh);
      transfer_router_2_reciever(rtr,rcvr_p->rcvr);
    }
}

/*
transfers the data from a rtr to a reciever
*/
int transfer_router_2_reciever(router * rtr,reciever *  rcvr){

  copy_to_reciever(rcvr,rtr->buff,rtr->size);
}
/*attaches the reciever to the router so that once a message reaches the router it gets transfered to reciever when it dispatches the message*/
int attach_reciever(router * rtr,reciever_pointer *rcvr){
  reciever_pointer *  rcv_point;
  rcv_point=malloc(sizeof(reciever_pointer));
  rcv_point->rcvr=rcvr;
  list_add(&(rcv_point->lh),&(rtr->rcv_list));
}
/*Transfers the data from the writer buffer  to the router buffer*/
int transfer_writer_2_router(writer * wrtr,router *  rtr){
  copy_to_router(rtr,wrtr->buff,wrtr->size);
}
/*copies data from any pointer to the buffer of  router specified*/
int copy_to_router(router * rtr,void * mem,size_t size){
  rtr->size=size;
  if(rtr->buff!=NULL)
    free(rtr->buff);
  rtr->buff=(char*)malloc(size);
  memcpy(rtr->buff,mem,size);
}
