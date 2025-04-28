#include <iostream>
using namespace std;
void reverse(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[6] = {0, 1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    reverse(arr, size);
    cout << "After reverse The Array: ";
    printArray(arr, size);
    return 0;
}