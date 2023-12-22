#include <stdio.h>
int main(void)
{
    int array [10] = {0};
    int N;
    printf("Enter the number : ");
    scanf("%d",&N);
    int rem;
    while (N > 0){
        rem = N%10;
        if (array[rem] == 1)
         break;
        array[rem] = 1;
        N = N/10;
    }
    if (N > 0)
     printf("Yes");
    else 
     printf("No");

}