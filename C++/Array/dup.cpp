#include <iostream>
#include <unordered_set>

void removeDuplicates(int arr[], int &size)
{
    std::unordered_set<int> uniqueElements;
    int newIndex = 0; // Index to track the position of unique elements

    for (int i = 0; i < size; ++i)
    {
        // If the element is not present in the set, add it to the set and update the array
        if (uniqueElements.find(arr[i]) == uniqueElements.end())
        {
            uniqueElements.insert(arr[i]);
            arr[newIndex] = arr[i];
            ++newIndex;
        }
    }

    size = newIndex; // Update the size of the array after removing duplicates
}

int main()
{
    int arr[] = {1, 2, 3, 2, 4, 5, 6, 4, 7, 8, 9, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Original Array: ";
    for (int i = 0; i < size; ++i)
    {
        std::cout << arr[i] << " ";
    }

    removeDuplicates(arr, size);

    std::cout << "\nArray after removing duplicates: ";
    for (int i = 0; i < size; ++i)
    {
        std::cout << arr[i] << " ";
    }

    return 0;
}
