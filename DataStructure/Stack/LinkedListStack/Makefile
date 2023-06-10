app.out : main.o LinkedListStack.o
	gcc -o app.out main.o LinkedListStack.o
main.o : LinkedListStack.h Test_LinkedListStack.c
	gcc -c -o main.o Test_LinkedListStack.c
LinkedListStack.o : LinkedListStack.h LinkedListStack.c
	gcc -c -o LinkedListStack.o LinkedListStack.c
clean :
	rm *.o app.out