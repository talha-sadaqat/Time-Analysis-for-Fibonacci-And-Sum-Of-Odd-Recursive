#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int recursiveSumNOdd(int n)
{
    int number = (2*n-1);

    if (n==0 || n==1)        // if the number is 0 or 1 return that number itslef
    {
        return number;
    }

    else
    {
        return number + recursiveSumNOdd(n-1);    // otherwise use recursive to go back and find the odd numbers and then add them
    }
}
