#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int count = 0, cnt, rem, mul=1, result=0,number;
    printf("please enter a number : ");
    scanf("%d", &number);

    int q = number;
    while (q != 0) 
    {
        q = q/10;
        count++;
    }
    cnt = count;
    q = number;
    while (q != 0) 
    {
        rem = q%10;
        while (cnt != 0) 
        {
            mul = mul *rem;
            cnt--;
        }
        result = result+mul;
        q= q/10;
        cnt = count;
        mul = 1;
    }
if (result == number)
        printf("This %d number is an Armstrong number",number); 
else 
        printf("This %d number is not an Armstrong number",number);
}