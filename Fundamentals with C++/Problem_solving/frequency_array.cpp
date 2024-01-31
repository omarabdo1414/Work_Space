#include <iostream>
#include <algorithm>

int main()
{
    int arr[] = {1,2,1,5,3,3,8,4,5,8,4,2,6,6,2};
    int arrSize = sizeof(arr) / sizeof(arr[0]);

    //Sorting the array
    std::sort(arr, arr + arrSize);

    //The counter for the frequency to count number of elements
    int counter = 1;

    //This is to loop on the array and find the elements and print their frequency
    for(int i = 0; i < arrSize; i++)
    {
        if(arr[i] == arr[i+1])
        {
            counter++;
        }
        else
        {
            std::cout << arr[i] << " -> " << counter << std::endl;
            //Reset the counter to start with the new element
            counter = 1;
        }
    }

    return 0;
}