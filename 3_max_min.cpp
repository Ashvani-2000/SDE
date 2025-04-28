// #include <iostream>
// #include <climits>
// using namespace std;
// int getMax(int num[], int n)
// {
//     int max = INT_MIN;
//     for (int i = 0; i < n; i++)
//     {
//         if (num[i] > max)
//         {
//             max = num[i];
//         }
//     }
//     return max;
// }
// int getMin(int num[], int n)
// {
//     int min = INT_MAX;
//     for (int i = 0; i < n; i++)
//     {
//         if (num[i] < min)
//         {
//             min = num[i];
//         }
//     }
//     return min;
// }
//     int main()
//     {
//         int size;
//         cout<<"enter size of array :";
//         cin >> size;
//         int num[100];
//         cout<<"enter number :";
//         for (int i = 0; i < size; i++)
//         {
//             cin >> num[i];
//         }
//         cout << "Max:" << getMax(num, size) << endl;
//         cout << "Min:" << getMin(num, size) << endl;
//         return 0;
//     }

// optimize code
#include <iostream>
using namespace std;
int getMax(int arr[], int size)
{
   if (size < 2)
   {
      return arr[0];
   }
   int max = arr[0];
   for (int i = 1; i < size; i++)
   {
      if (max < arr[i])
      {
         max = arr[i];
      }
   }

   return max;
}
int getMin(int arr[], int size)
{
   if (size < 2)
   {
      return arr[0];
   }
   int min = arr[0];
   for (int i = 1; i < size; i++)
   {
      if (min > arr[i])
      {
         min = arr[i];
      }
   }

   return min;
}
int main()
{
   int arr[] = {5, 3, 1, 4};
   int max = getMax(arr, 4);
   int min = getMin(arr, 4);
   cout << "max: " << max << endl;
   cout << "min: " << min << endl;
   return 0;
}