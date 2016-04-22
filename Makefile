all: main.o diskr.o radical.o
	gcc -Wall -o obj/main obj/main.o obj/diskr.o

main.o: src/main.c
	gcc -c src/main.c
	mv main.o obj/

diskr.o: src/diskr.c
	gcc -c src/diskr.c
	mv diskr.o obj/

radical.o: src/radical.c
	gcc -c src/radical.c
	mv radical.o obj/

.PHONY: clean

clean:
	rm ./obj/*