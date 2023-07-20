app.out : main.o LinkedList.o
	gcc -o app.out main.o LinkedList.o
main.o : LinkedList.h Test_MoveToFront.c
	gcc -c -o main.o Test_MoveToFront.c
LinkedList.o : LinkedList.h LinkedList.c
	gcc -c -o LinkedList.o LinkedList.c
clean : 
	rm *.o app.out