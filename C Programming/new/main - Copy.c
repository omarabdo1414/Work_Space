#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row,i,j,n = 1;

    printf("Enter the number of rows : ");
    scanf("%d",&row);

    for(i=1;i<=row;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
