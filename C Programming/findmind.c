#include <stdio.h>

int *findmid(int arr[], int len)
{
    return &arr[len/2];
}

int main()
{
    int arr[] = {1,5,2,65,235,21,56,48,1,9,25,8,93,9};
    int len = sizeof(arr) / sizeof(arr[0]);

    int *mid = findmid(arr, len);

    printf("%d", *mid);

    *(arr+1) = 10;
    printf("\n%d", arr[1]);
    return 0;
}