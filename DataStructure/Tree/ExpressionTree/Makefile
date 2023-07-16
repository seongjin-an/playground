app.out : main.o ExpressionTree.o
	gcc -o app.out main.o ExpressionTree.o
main.o : ExpressionTree.h Test_ExpressionTree.c
	gcc -c -o main.o Test_ExpressionTree.c
ExpressionTree.o : ExpressionTree.h ExpressionTree.c
	gcc -c -o ExpressionTree.o ExpressionTree.c
clean :
	rm *.o app.out