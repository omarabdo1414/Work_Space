#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main() 
{
    int val1,x,val2,count = 0;
    printf("Please enter a number (positive number): ");
    scanf("%d",&x);
    val1 = ceil(sqrt(x));
    val2 = x;
    for (int i = 2; i <= val1; i++)
    {
        if( val2%i == 0)
         count =1;
    }
    if ((count == 0 && val2 != 1) || val2 == 2 || val2 == 3)
     printf("This %d is a prime number", val2);
    else
     printf("This %d is not a prime number",val2);
return 0;
}