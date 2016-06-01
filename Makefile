all: main.o lib.o
	gcc -Wall -o obj/main obj/main.o obj/lib.o

main.o: Lab/main.cpp
	gcc -c Lab/main.cpp
	mv main.o obj/

lib.o: Lab/lib.cpp
	gcc -c Lab/lib.cpp
	mv lib.o obj/

.PHONY: clean

clean:
	rm ./obj/*