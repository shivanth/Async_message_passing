#include<unistd.h>
#include<exchange.h>
#include "list.h"




typedef struct writer{

  int id;
  LIST_HEAD(exchange_list,exchange) exchange_head;
  int lock; // not implemented yet
  char * buffer;
};


int init_writer(writer w,int id){
  w.id=id;

  buffer=calloc(1000);//allocates 1 KB of memory needs to make this parameterized not sure why this is required
  //init lock and exchange list;

}

int writer_send(writer w,void * data){
  LIST_FOREACH(exchange_list){

  }

}

