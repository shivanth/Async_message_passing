OBJECT_FLAGS=-c -g

reciever.o : reciever.c router.o sender.o
	gcc $(OBJECT_FLAGS) reciever.c -I./
router.o : router.c router.h
	gcc $(OBJECT_FLAGS) router.c -I./
sender.o : sender.c sender.h
	gcc $(OBJECT_FLAGS) sender.c -I ./

clean:
	rm -f *.o *.h.gch