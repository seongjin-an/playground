# https://velog.io/@hidaehyunlee/Makefile-%EB%A7%8C%EB%93%A4%EA%B8%B0
app.out : main.o LinkedList.o
	gcc -o app.out main.o LinkedList.o

main.o : LinkedList.h Test_LinkedList.c
	gcc -c -o main.o Test_LinkedList.c
 
LinkedList.o : LinkedList.h LinkedList.c
	gcc -c -o LinkedList.o LinkedList.c

clean :
	rm *.o app.out