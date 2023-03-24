run : main
	./main.out > /dev/ttys001

main: clean Node.o Array.o main.o
	g++ -g Node.o Array.o main.o -o main.out

main.o :
	g++ -g -c main.cpp -o main.o
Node.o: 
	g++ -g -c Node.cpp -o Node.o

Array.o:
	g++ -g -c Array.cpp -o Array.o

clean: 
	rm -f *.o *.out
