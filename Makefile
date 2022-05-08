market: main.c car.o manager.o
	gcc -o market main.c car.o manager.o
clean:
	rm *.o market

