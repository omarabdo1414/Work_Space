#include <stdio.h>
#include <stdlib.h>
#define MAX 50

int main()
{
    int a[MAX][MAX],b[MAX][MAX],product[MAX][MAX];
    int i,j,k;
    int arows,acolumns,brows,bcolumns;
    int sum = 0;

    printf("Enter the Rows and Columns of a matrix : ");
    scanf("%d %d",&arows,&acolumns);

    printf("Enter the elements of the a matrix : \n");
    for(i=0; i<arows; i++)
     {
        for (j=0; j<acolumns; j++)
        {
            scanf("%d", &a[i][j]);
        }
     }
    printf("Enter the Rows and Columns of b matrix: ");
    scanf("%d %d",&brows,&bcolumns);

    if (brows != acolumns)
    {
        printf("Sorry, we can not multiply the two matrices ");
    }
    else 
    {
        printf("Enter the elements of the b matrix : \n");
        for(i=0; i<brows; i++)
        {
          for (j=0; j<bcolumns; j++)
          {
            scanf("%d", &a[i][j]);
          }
        }
    }

     for (i=0; i<arows; i++)
     {
        for (j=0; j<bcolumns; j++)
        {
            for (k=0; k<brows; k++)
            {
                sum += a[i][k] * a[k][j];
            }
            product[i][j] = sum;
            sum = 0;
        }
     }
     printf("Result in matrix \n");
     for (i=0; i<arows; i++)
     {
        for (j=0; j<bcolumns; j++)
        {
            printf("%d ", product [i][j]);
        }
        printf("\n");
     }
}