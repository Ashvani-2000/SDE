#include <iostream>
using namespace std;
void swap_Alternate(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size - 1)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}
int printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

int main()
{
    int even[8] = {3, 2, 4, 6, 5, 6, 1, 7};
    int odd[5] = {10, 12, 11, 13, 15};
    cout << "Even array swapping: ";
    swap_Alternate(even, 8);
    printArray(even, 8);
    cout << "\nOdd array swapping: ";
    swap_Alternate(odd, 5);
    printArray(odd, 5);
    return 0;
}