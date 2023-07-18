app.out : main.o DisjointSet.o
	gcc -o app.out main.o DisjointSet.o
main.o : DisjointSet.h Test_DisjointSet.c
	gcc -c -o main.o Test_DisjointSet.c
DisjointSet.o : DisjointSet.h DisjointSet.c
	gcc -c -o DisjointSet.o DisjointSet.c
clean :
	rm *.o app.out