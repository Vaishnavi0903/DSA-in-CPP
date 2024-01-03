// Swap alternate elements in an array

#include <iostream>
using namespace std;

void swapalternate(int arr[], int n) // n=size of array
{
    for (int i = 0; i < n; i = i + 2)
    {
        if (i + 1 < n)
        {
            swap(arr[i], arr[i + 1]);          //Built-in function
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];

    // Take inputs in an array
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    swapalternate(arr, n);

    return 0;
}