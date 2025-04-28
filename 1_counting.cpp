#include <iostream>
using namespace std;
void printCounting(int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
    }
    cout << endl;
}
int main()
{
    int n;
    cout << "Enter counting value: ";
    cin >> n;
    printCounting(n);
}