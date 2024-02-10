#include <stdio.h>

int fact (int n)
{
    if (n == 0)
     return 1;
    else 
     return n * fact(n - 1);
}

int main () 
{
    int n ;
    printf ("Please enter the number : ");
    scanf ("%d", &n);
    printf ("The Factorial Number of %d is : %d",n,fact(n));
    return 0;
}