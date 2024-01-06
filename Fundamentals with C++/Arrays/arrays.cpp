#include <iostream>

//syatax of array
/*
    dataType arrayName[arraySize];
    dataType arrayName[arraySize] = {value1, value2, etc...};
    dataType arrayName[] = {value1, value2, etc...};

*/

int main()
{
    int arraySize = 7;

    int arr[arraySize] = {1, 2, 3, 4, 5};
    char a[6] = "Hello"; // C style \0 \0 \0 = 0  ---- 0 = 48

    std::string s = "Hello"; // C++ style

    std::cout << "First Element  : " << arr[0] << std::endl;
    std::cout << "Second Element : " << arr[1] << std::endl;
    std::cout << "Fourth Element : " << arr[3] << std::endl;

    arr[3] = 10;

    std::cout << "Fourth Element : " << arr[3] << std::endl;

    for(int i = 0; i < arraySize; i++)
    {
        std::cout << arr[i] << " ";
    }

    std::cout << std::endl;

    int num[] = {2,3,5,4,9,12,4,56,12,65,89};

    int arrSize = sizeof(num) / sizeof(num[0]);

    std::cout << "size is : " << arrSize << std::endl;

    int matrixDim = 3;
    int matrix[matrixDim][matrixDim] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
        };

    for(int i = 0; i < matrixDim; i++)
    {
        for(int j = 0; j < matrixDim; j++)
        {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}