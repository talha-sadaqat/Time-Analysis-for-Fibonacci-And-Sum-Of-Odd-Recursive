#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int iterativeFibonacci(int n)
{
    int firstNum = 0;
    int secondNum =1;   // the first two numbers set to 1 and 0
    int next;

    if (n == 0)
    {
     return 0;    // if n =0 retrun 0
    }

    if (n==1)
    {
     return 1;   // otherwise if n = 1 return 1 
    }

    for (int i = 2; i<=n; i++)
   {
        next = firstNum + secondNum;
        firstNum = secondNum;       // iterative for loop to keep adding the previous two terms and then using variables to store the new two elements 
        secondNum = next;
    }
    return next;

}
