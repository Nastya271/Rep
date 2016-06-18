bin/main: obj/main.o obj/lib.o
	gcc -o  bin/main obj/main.o obj/lib.o -lm

obj/main.o: Lab/main.c
	gcc -o obj/main.o -c Lab/main.c

obj/lib.o: Lab/lib.c
	gcc -o obj/lib.o -c Lab/lib.c 

.PHONY: clean

clean:
	rm ./obj/*
	rm ./bin/*
