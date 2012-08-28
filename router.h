#include<unistd.h>
#include<reciever.h>


typedef struct router_struct {

  char * buff;
  //int lock;
  reciever r;
  int size;
}router;



int send_to_reciever(router rtr,reciever rcvr){
  copy_to_reciever(rcvr,rtr.buff,rtr.size);
}

