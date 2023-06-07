app.out : main.o CircularDoublyLinkedList.o
	gcc -o app.out main.o CircularDoublyLinkedList.o

main.o : CircularDoublyLinkedList.h Test_CircularDoublyLinkedList.c
	gcc -c -o main.o Test_CircularDoublyLinkedList.c
 
CircularDoublyLinkedList.o : CircularDoublyLinkedList.h CircularDoublyLinkedList.c
	gcc -c -o CircularDoublyLinkedList.o CircularDoublyLinkedList.c

clean :
	rm *.o app.out