#include <iostream>
using namespace std;
int Duplicate(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    for (int i = 1; i < size; i++)
    {
        ans = ans ^ i;
    }
    return ans;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Duplicate in Arr is:" << endl;
    cout << Duplicate(arr, size);
    return 0;
}