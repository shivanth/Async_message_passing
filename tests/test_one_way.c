#include<sender.h>
#include<reciever.h>
#include<router.h>



void main(){

  writer w1;
  reciever r1;;
  char* msg ="Message from w1";
  router r;
  r.id=0;
  init_router(&r,0);
  attach_reciever(&r,&r1);
  init_writer(&w1,0);
  send_message(&w1,&r,msg,strlen(msg));
  printf("%s",r1.buff);

}
