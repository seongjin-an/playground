app.out : main.o CircularQueue.o
	gcc -o app.out main.o CircularQueue.o
main.o : CircularQueue.h Test_CircularQueue.c
	gcc -c -o main.o Test_CircularQueue.c
CircularQueue.o : CircularQueue.h CircularQueue.c
	gcc -c -o CircularQueue.o CircularQueue.c
clean :
	rm *.o app.out
