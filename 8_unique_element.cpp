#include <iostream>
using namespace std;
int findUnique(int *arr, int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}
int main()
{
    int arr[] = {1, 3, 1, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Unique element of Array is:" << findUnique(arr, size);
    return 0;
}