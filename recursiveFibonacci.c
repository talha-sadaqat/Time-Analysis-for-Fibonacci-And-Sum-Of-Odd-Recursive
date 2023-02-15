#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int recursiveFibonacci(int n)
{
    if(n <= 0)
    {
     return 0;    // if n smaller then or equal to o return n , this is the base case
    }

    else if(n == 1)
    {
     return 1;      // if n =1 return 1 this is the base case
    }

    else
    {
     return ( recursiveFibonacci(n-1) + recursiveFibonacci(n-2) );   // recursive call to add back the previous two numbers
    }
}
