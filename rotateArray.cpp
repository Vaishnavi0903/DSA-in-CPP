#include <iostream>
#include <vector>
using namespace std;

void rotate(int arr[], int k, int n)
{   vector<int>temp(n);
    for (int i = 0 ; i < n ; i++)
    {
        temp[(i+k)%n] = arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << temp[i] << " ";
    }
}

int main()
{
    int arr[] = {1,2,3,4,5};
    rotate(arr, 2, 5);
    return 0;
}