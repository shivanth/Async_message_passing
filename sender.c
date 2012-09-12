#include<sender.h>




int init_writer(writer wrtr,int id){
  wrtr.id=id;

  wrtr.buff=malloc(1000);//allocates 1 KB of memory needs to make this parameterized not sure why this is required
  //init lock and exchange list;

}

int send_message(writer *  wrtr,router * rtr,void * data,int size){
  if(wrtr->buff!=NULL)
    free(wrtr->buff);

  
  wrtr->buff=(char*)malloc(size);
  wrtr->size=size;
  memcpy(wrtr->buff,data,size);
  
  
  
}
