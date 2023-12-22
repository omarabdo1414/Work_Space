#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num;
   printf("How many Rows you want int pyramid : ");
   scanf("%d", &num);
int i,j;
for (i = 1 ; i <=num;  i++) 
{
   for (j=1; j <=5*num-1; j++)
   if (j >= num-(i-1) && j <= num+(i-1))
   {
      printf("*");
   }
   else 
   {
      printf(" ");
   }
   printf("\n");
}
   return 0;
}
