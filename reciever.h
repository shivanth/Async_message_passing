#include<unistd.h>
//#include<router.h>


typedef struct reciever_struct {

  char * buff;
  //int lock;
  int size;
}reciever;



int copy_to_reciever(reciever rcvr,void * mem,int size){
  rcvr.size=size;
  rcvr.buff=(char*)malloc(size);
  memcpy(rcvr.buff,mem,size);
}

