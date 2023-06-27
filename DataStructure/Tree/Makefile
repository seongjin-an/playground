app.out : main.o LCRSTree.o
	gcc -o app.out main.o LCRSTree.o
main.o : LCRSTree.h Test_LCRSTree.c
	gcc -c -o main.o Test_LCRSTree.c
LCRSTree.o : LCRSTree.h LCRSTree.c
	gcc -c -o LCRSTree.o LCRSTree.c
clean :
	rm *.o app.out