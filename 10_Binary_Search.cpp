#include <iostream>
using namespace std;
int binary_Search(int arr[], int size, int key)
{
    int start = 0, end = size - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}
int main()
{
    int even[4] = {1, 2, 3, 4};
    int odd[5] = {2, 5, 6, 7, 8};
    int index = binary_Search(even, 4, 3);
    cout << "Index of 3 is : " << index << endl;
    index = binary_Search(odd, 5, 7);
    cout << "Index of 7 is : " << index << endl;
    return 0;
}
