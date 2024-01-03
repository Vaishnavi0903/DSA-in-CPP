#include <iostream>
using namespace std;

int searchInRotatedArray(int arr[],int n , int key)
{
    int s = 0;
    int e = n - 1;
    int mid = s + e / 2;
    while (s <= e)
    {
        int mid = (s + e) / 2;

        if (arr[mid] == key)
        {
            return mid; // Element found
        }

        if (arr[s] <= arr[mid])
        {
            // Left half is sorted
            if (key >= arr[s] && key <= arr[mid])
            {
                // Key is in the left half
                e = mid - 1;
            }
            else
            {
                // Key is in the right half
                s = mid + 1;
            }
        }
        else
        {
            // Right half is sorted
            if (key >= arr[mid] && key <= arr[e])
            {
                // Key is in the right half
                s = mid + 1;
            }
            else
            {
                // Key is in the left half
                e = mid - 1;
            }
        }
    }

    return -1; // Element not found
}

int main()
{
    int arr[] = {4, 5, 6, 7, 8, 9, 1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 6;

    int index = searchInRotatedArray(arr, n, key);

    if (index != -1)
    {
        cout << "Element found at index: " << index << endl;
    }
    else
    {
        cout << "Element not found in the array" << endl;
    }

    return 0;
}
