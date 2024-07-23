#include <iostream>
#include <algorithm>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            // Compare adjacent elements
            if (arr[j] > arr[j+1]) {
                // Swap if they are in the wrong order
                swap(&arr[j], &arr[j+1]); // O(n^2)
            }
        }
    }
}

void print(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(arr)/sizeof(arr[0]);

    print(arr, size);

    bubbleSort(arr, size);

    print(arr, size);

    return 0;
}
