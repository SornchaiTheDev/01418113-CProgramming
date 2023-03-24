run : main
	./a.out 

main : clean Node.o  main.o
	g++ -g main.o Node.o
	
main.o : 
	g++ -g -c main.cpp -o main.o

Node.o :
	g++ -g -c Node.cpp -o Node.o

clean :
	rm -rf *.o a.out