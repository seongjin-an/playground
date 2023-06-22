app.out : main.o LinkedQueue.o
	gcc -o app.out main.o LinkedQueue.o
main.o : LinkedQueue.h Test_LinkedQueue.c
	gcc -c -o main.o Test_LinkedQueue.c
LinkedQueue.o : LinkedQueue.h LinkedQueue.c
	gcc -c -o LinkedQueue.o LinkedQueue.c
clean :
	rm *.o app.out
