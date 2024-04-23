#include <iostream>

void merge(int arr[], int const left, int const mid, int const right)
{
    //finding the size of the new arrays
    const int subArrayOne = mid - left + 1;
    const int subArrayTwo = right - mid;

    //create temp Array
    auto * leftArray = new int[subArrayOne],
         * rightArray = new int[subArrayTwo];

    for(int i = 0; i < subArrayOne; i++)
    {
        leftArray[i] = arr[left + i];
    }

    for(int j = 0; j < subArrayTwo; j++)
    {
        rightArray[j] = arr[mid + 1 + j];
    }

    int i = 0,
        j = 0,
        k  = left;

    while (i < subArrayOne && j < subArrayTwo)
    {
        if(leftArray[i] <= rightArray[j]){
            arr[k] = leftArray[i];
            i++;
        }
        else{
            arr[k] = rightArray[j];
            j++;
        }
        k++;
    }

    while (i < subArrayOne)
    {
        arr[k] = leftArray[i];
        i++;
        k++;
    }

    while (j < subArrayTwo)
    {
        arr[k] = rightArray[j];
        j++;
        k++;
    }

    delete[] leftArray;
    delete[] rightArray;
}

void mergeSort(int array[], const int begin, const int end)
{
    if(begin >= end)
    {
        return;
    }

    auto mid = begin + (end - begin) / 2;
    mergeSort(array, begin, mid);
    mergeSort(array, mid + 1, end);
    merge(array, begin, mid, end);
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {1, 5, 2, -5, 20, -3, 40};
    int sizeArr = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Given Array is : ";
    printArray(arr, sizeArr);

    mergeSort(arr, 0, sizeArr - 1);

    std::cout << "\nSorted Array is : ";
    printArray(arr, sizeArr);
    return 0;
}