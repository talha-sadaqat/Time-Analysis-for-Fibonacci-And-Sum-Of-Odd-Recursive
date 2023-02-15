#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int iterativeSumNOdd(int n)
{
 int j=1;            // setting sum to 0 and j to 1 the first odd number 
 int sum =0;

 for(int i=1; i<=n; i++)
    {
        sum = sum +j;     // keep adding the next odd numbers until the limit n has been reached 
        j = j+2;
    }
return sum; // returning sum to check in printf statements
}
