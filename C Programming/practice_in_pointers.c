#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   int x[]={1,2,3,14,5,6,7,8};
   int* ptr = &x[2];
   ptr = (int*) malloc(sizeof(int) * 5);
   ptr = (float*) malloc(100 * sizeof(float));


   printf("the value is : %d\n", *ptr);
   printf("the value is : %d\n", *(ptr+1));
}