app.out : main.o DoublyLinkedList.o
	gcc -o app.out main.o DoublyLinkedList.o

main.o : DoublyLinkedList.h Test_DoublyLinkedList.c
	gcc -c -o main.o Test_DoublyLinkedList.c
 
DoublyLinkedList.o : DoublyLinkedList.h DoublyLinkedList.c
	gcc -c -o DoublyLinkedList.o DoublyLinkedList.c

clean :
	rm *.o app.out