#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main() 
{
    int a, b,sum,carry;
    printf("pleasr enter a two numbers : ");
    scanf("%d %d", &a, &b);
    while (b != 0)
    {
        sum = a^b;
        carry = (a&b)<<1;
        a = sum;
        b = carry;
    }
    printf ("sum of numbers  is : %d",sum);
    return 0;
}