lab3: main.o iterativeSumNOdd.o recursiveSumNOdd.o iterativeFibonacci.o recursiveFibonacci.o
	gcc -Wall -std=c99  main.o iterativeSumNOdd.o recursiveSumNOdd.o iterativeFibonacci.o recursiveFibonacci.o -o lab3
iterativeSumNOdd.o: iterativeSumNOdd.c
	gcc -Wall -std=c99 -c iterativeSumNOdd.c
recursiveSumNOdd.o: recursiveSumNOdd.c
	gcc -Wall -std=c99 -c recursiveSumNOdd.c
iterativeFibonacci.o: iterativeFibonacci.c
	gcc -Wall -std=c99 -c iterativeFibonacci.c
recursiveFibonacci.o: recursiveFibonacci.c
	gcc -Wall -std=c99 -c recursiveFibonacci.c
main.o: main.c
	gcc -Wall -std=c99 -c main.c
clean:
	rm *.o
