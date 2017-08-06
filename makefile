sources = animal.c lw_new.c main.c
objects = animal.o lw_new.o main.o

test : $(objects)
	gcc -c $(sources)
	gcc -o test $(objects)

dtest : $(objects)
	gcc -g -c $(sources)
	gcc -o dtest $(objects)

.PHONY : clean
clean : 
	-rm $(objects) test dtest
