OBJECT_FLAGS=-c

test_one_way.o : test_one_way.c ../sender.o ../reciever.o ../router.o
	gcc  test_one_way.c ../sender.o ../reciever.o ../router.o -I../

clean:
	rm -f *.o *.h.gch