#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int n, q,rem,result=0;
    
    printf("please enter the number : ");
    scanf("%d",&n);
    q=n;

    while (q != 0)
    {
        rem = q%10;
        result = result*10 + rem;
        q = q/10;
    }

    if (result == n)
     printf("\nIt is a palindrome");
    else 
     printf ("\n No! Not a palindrome ");

    return 0;
}