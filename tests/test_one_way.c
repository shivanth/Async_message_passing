#include<sender.h>
#include<reciever.h>
#include<router.h>



void main(){

  writer w1;
  reciever r1;;
  router r;
  r.attach_reciever(r1);
  init_writer(w1);
  send_message(w1,r."Message from w1");
  printf("%s",reciever.buff);

}
