#include<sender.h>




int init_writer(writer * wrtr,int id,void * (*callback)(void *)){
  wrtr->id=id;
  wrtr->buff=malloc(1000);//allocates 1 KB of memory 
  wrtr->callback=callback;
  //init lock and exchange list;

}
/*A Special function to transfer string from source to destination */

int send_message_via_router(writer *  wrtr,router * rtr,void * data,int size){
  copy_2_writer(wrtr,data,size);
  transfer_writer_2_router(wrtr,rtr,size);
  distribute_router_2_reciever(rtr);
}
int copy_2_writer(writer * wrtr,void * mem,int size){
  if(wrtr->buff!=NULL)
    free(wrtr->buff);

  
  wrtr->buff=(char*)malloc(size);
  wrtr->size=size;
  memcpy(wrtr->buff,mem,size);
}

int send_message_2_reciever(writer *  wrtr,reciever * rcvr,void * data,int size){
  
  copy_2_writer(wrtr,data,size);
  copy_2_reciever(rcvr,wrtr->buff,size);
  rcvr->callback=wrtr->callback;
}
