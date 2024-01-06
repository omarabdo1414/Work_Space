#include <stdio.h>

void getMinMax(int arr[], int *min, int *max, int size)
{
    *min = *max = arr[0];
    for(int i = 0; i < size;i++)
    {
        if(arr[i] < *min)
            *min = arr[i];
        if(arr[i] > *max)
            *max = arr[i];
    }
}

int main()
{
    int arr[] = {1,5,2,65,235,21,56,48,1,9,25,8,93,9};
    int min, max;

    int len = sizeof(arr) / sizeof(arr[0]);

    getMinMax(arr, &min, &max, len);
    printf("%d %d", min, max);

    return 0;
}