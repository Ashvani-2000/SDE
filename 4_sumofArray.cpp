#include <iostream>
using namespace std;
int sum(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int main()
{
    int arr[] = {25, 30, 31, 16};
    int n = sizeof(arr) / sizeof(arr[0]);
    ;
    int res = sum(arr, n);
    cout << "Sum of Array is: " << res << endl;
    return 0;
}
