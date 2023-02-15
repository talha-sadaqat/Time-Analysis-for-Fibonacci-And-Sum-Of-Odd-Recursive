Readme for Fibonacci and Sum of N Odd Numbers

This C program calculates the n-th Fibonacci number and the sum of the first n odd numbers, both iteratively and recursively. It also measures the time taken by each function to complete the calculation.

How to use
The program takes one integer input n as a command line argument. To use the program, compile and run the program with the command:


Functions
iterativeFibonacci()
This function takes an integer n as input and returns the nth Fibonacci number, calculated iteratively using a for loop. If n is less than or equal to 0, the function returns 0. If n is 1, the function returns 1.

recursiveFibonacci()
This function takes an integer n as input and returns the nth Fibonacci number, calculated recursively. If n is less than or equal to 0, the function returns 0. If n is 1, the function returns 1.

iterativeSumNOdd()
This function takes an integer n as input and returns the sum of the first n odd numbers, calculated iteratively using a for loop. The function first initializes a variable sum to 0 and j to 1, the first odd number. Then, it adds the next odd numbers until the limit n has been reached.

recursiveSumNOdd()
This function takes an integer n as input and returns the sum of the first n odd numbers, calculated recursively. The function first calculates the number of the nth odd number and then adds it to the sum of the previous (n-1) odd numbers, which it calculates recursively.

Output
When the program is run with a valid integer input, it outputs the following to the console:

The time taken to complete the iterative Fibonacci calculation of size n
The time taken to complete the recursive Fibonacci calculation of size n
The time taken to complete the iterative Sum_N_Odd calculation of size n
The time taken to complete the recursive Sum_N_Odd calculation of size n
If the program is run with an invalid input (i.e. no input or non-integer input), it outputs an error message to the console.
