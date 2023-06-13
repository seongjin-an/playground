app.out : main.o Calculator.o LinkedListStack.o
	gcc -o app.out main.o Calculator.o LinkedListStack.o
main.o : Calculator.h Test_Calculator.c
	gcc -c -o main.o Test_Calculator.c
Calculator.o : Calculator.h Calculator.c
	gcc -c -o Calculator.o Calculator.c
LinkedListStack.o : LinkedListStack.h LinkedListStack.c
	gcc -c -o LinkedListStack.o LinkedListStack.c
clean :
	rm *.o app.out