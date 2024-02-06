#include <iostream>
#include <array>

void swap(int *one, int *two)
{
    int temp = *one;
    *one = *two;
    *two = temp;
}

void selectionSort(int arr[], int size)
{
    int i, j, min_idx;

    for (i = 0; i < size - 1; i++)
    {
        min_idx = i;
        for(j = i + 1; j < size; j++)
        {
            if(arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
        }

        swap(&arr[min_idx], &arr[i]);
    }
}

void print(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main()
{
    int arr[] = {1, 5, 6, 2, 3, 7, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    print(arr, size);
    selectionSort(arr, size);
    print(arr, size);
    return 0;
}