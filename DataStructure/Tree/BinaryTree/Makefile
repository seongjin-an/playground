app.out : main.o BinaryTree.o
	gcc -o app.out main.o BinaryTree.o
main.o : BinaryTree.h Test_BinaryTest.c
	gcc -c -o main.o Test_BinaryTest.c
BinaryTree.o : BinaryTree.h BinaryTree.c
	gcc -c -o BinaryTree.o BinaryTree.c
clean:
	rm *.o app.out