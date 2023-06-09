app.out : main.o ArrayStack.o
	gcc -o app.out main.o ArrayStack.o

main.o : ArrayStack.h Test_ArrayStack.c
	gcc -c -o main.o Test_ArrayStack.c
 
ArrayStack.o : ArrayStack.h ArrayStack.c
	gcc -c -o ArrayStack.o ArrayStack.c

clean :
	rm *.o app.out