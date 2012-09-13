#include<sender.h>




int init_writer(writer * wrtr,int id){
  wrtr->id=id;

  wrtr->buff=malloc(1000);//allocates 1 KB of memory 
  //init lock and exchange list;

}
/*A Special function to transfer string from source to destination */

int send_message(writer *  wrtr,router * rtr,void * data,int size){
  if(wrtr->buff!=NULL)
    free(wrtr->buff);

  
  wrtr->buff=(char*)malloc(size);
  wrtr->size=size;
  memcpy(wrtr->buff,data,size);
  transfer_writer_2_router(wrtr,rtr,size);
  distribute_router_2_reciever(rtr);
}
