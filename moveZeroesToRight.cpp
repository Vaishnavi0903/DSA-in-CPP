// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void moveZeroes(int arr[], int n)
{
    int i = 0;
    int j = 1;
    while (j < n)
    {
        if (arr[i] == 0)
        {
            if (arr[j] == 0)
            {
                j++;
            }
            else
            {
                swap(arr[i], arr[j]);
                i++;
                j++;
            }
        }
        else
        {
            i++;
            j++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {0,1,0,3,12};
    moveZeroes(arr, 5);
    return 0;
}