#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int recursiveFibonacci(int n);
int iterativeFibonacci(int n);
int iterativeSumNOdd(int n);     // fucntion prototypes
int recursiveSumNOdd(int n);

int main (int argc, char *argv[])
{
    if (argc<=1)
    {
        printf("You have entered wrong numbers of input in the command line");  // Checking if the entry to comman line is correct 
    }
    int n = atoi(argv[1]);   // converting any string into integer


    double timeElapsed =0.0;
    clock_t begin , end;
    begin =clock();
                                    
    iterativeFibonacci(n);    // call to fucntion iterative fibonacci and the clock checking the time

    end=clock();
    timeElapsed += (double)(end-begin) / CLOCKS_PER_SEC;
    printf("Time to complete iterative Fibonacci of size %d: %lf seconds\n",n, timeElapsed);

    
    
    timeElapsed =0.0;
    begin =clock();

    recursiveFibonacci(n);   // call to fucntion recursive fibonacci and the clock checking the time

    end=clock();
    timeElapsed += (double)(end-begin) / CLOCKS_PER_SEC;
    printf("Time to complete recursive Fibonacci of size %d: %lf seconds\n",n, timeElapsed);



    timeElapsed =0.0;
    begin =clock();

    iterativeSumNOdd(n);    // call to fucntion iterative sumNOdd and the clock checking the time

    end=clock();
    timeElapsed += (double)(end-begin) / CLOCKS_PER_SEC;
    printf("Time to complete iterative Sum_N_Odd of size %d: %lf seconds\n",n, timeElapsed);



    timeElapsed =0.0;
    begin =clock();

    recursiveSumNOdd(n);  // call to fucntion recursive sumNOdd and the clock checking the time

    end=clock();
    timeElapsed += (double)(end-begin) / CLOCKS_PER_SEC;
    printf("Time to complete recursive Sum_N_Odd of size %d: %lf seconds\n",n, timeElapsed);



    return 0;
}
