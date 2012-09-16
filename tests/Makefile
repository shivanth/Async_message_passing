SRC=test_one_way.c test_one_way_2recievers.c test_one_way_without_router.c 
LIB=../sender.o ../reciever.o ../router.o
OPTIONS=-I../
HDR=$(SRC:.c=.h)
OBJ=$(SRC:.c=.o)

PROG=$(SRC:.c=)

all:$(PROG)

$(PROG):$(OBJ) $(LIB)
	gcc -Wall $(OPTIONS) -g $(LIB)   $@.c -o   $@.out
.c.o:$(SRC) $(HDR)
	gcc -Wall  $(OPTIONS) -g -c $<
clean:
	rm -f $(PROG) $(OBJ)