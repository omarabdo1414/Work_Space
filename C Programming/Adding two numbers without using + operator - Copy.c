#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main() 
{
    int x,y;
    printf("please enter a two numbers : ");
    scanf("%d %d",&x,&y);

    if (y > 0)
    {
    while (y!=0)
    {
        x++;
        y--;
    }
    }
    else if (y<0)
    {
        while (y != 0)
        {
            x--;
            y++;
        }
    }
    printf("\none of the two numbers are = %d\n",x);

return 0;
}