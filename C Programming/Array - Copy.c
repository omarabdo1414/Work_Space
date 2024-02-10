#include <stdio.h>
#include <stdlib.h>

int main () 
{
     int a;
     printf("Enter the number Please : ");
     scanf("%d",a);

     if (a<=200)
     {
          a = a * 1;
     }
     else if (a == 201 && a <= 400)
     {
          a = a * 1.5;
     }
     else if (a >400)
     {
          a = a * 2;
     }
     printf("%d",a);
     return 0;
}