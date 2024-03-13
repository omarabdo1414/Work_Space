#include <iostream>

// Strategy interface
class SortingStrategy
{
public:
    virtual void Sort(int arr[], int size) const = 0;
    virtual ~SortingStrategy() = default;
};

// Concrete strategy - Bubble sort
class BubbleSort : public SortingStrategy
{
public:
    void Sort(int arr[], int size) const override
    {
        for (int i = 0; i < size - 1; ++i)
        {
            for (int j = 0; j < size - i - 1; ++j)
            {
                if (arr[j] > arr[j + 1])
                {
                    std::swap(arr[j], arr[j + 1]);
                }
            }
        }
    }
};

// Concrete strategy - Quick sort
class QuickSort : public SortingStrategy
{
public:
    void Sort(int arr[], int size) const override
    {
        QuickSortRecursive(arr, 0, size - 1);
    }

private:
    void QuickSortRecursive(int arr[], int low, int high) const
    {
        if (low < high)
        {
            int pivot = Partition(arr, low, high);

            QuickSortRecursive(arr, low, pivot - 1);
            QuickSortRecursive(arr, pivot + 1, high);
        }
    }

    int Partition(int arr[], int low, int high) const
    {
        int pivot = arr[high];
        int i = low - 1;

        for (int j = low; j <= high - 1; ++j)
        {
            if (arr[j] < pivot)
            {
                ++i;
                std::swap(arr[i], arr[j]);
            }
        }

        std::swap(arr[i + 1], arr[high]);
        return i + 1;
    }
};

// Context class
class Sorter
{
private:
    SortingStrategy* sortingStrategy;

public:
    Sorter(SortingStrategy* strategy) : sortingStrategy(strategy) {}

    void SetStrategy(SortingStrategy* strategy)
    {
        sortingStrategy = strategy;
    }

    void PerformSort(int arr[], int size) const
    {
        sortingStrategy->Sort(arr, size);
    }
};

int main()
{
    int arr[] = {5, 2, 8, 1, 9, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    BubbleSort bubbleSort;
    QuickSort quickSort;

    Sorter sorter(&bubbleSort);
    sorter.PerformSort(arr, size);

    std::cout << "Array after bubble sort: ";
    for (int i = 0; i < size; ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    sorter.SetStrategy(&quickSort);
    sorter.PerformSort(arr, size);

    std::cout << "Array after quick sort: ";
    for (int i = 0; i < size; ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
