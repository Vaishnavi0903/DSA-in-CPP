#include<iostream>
using namespace std;

void sorting(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int ele = arr[i];
        int j = i-1 ;
        for(; j>=0 ; j--)
        {
            if(arr[j]>ele)
            {
                arr[j+1]=arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j+1] = ele;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {1,2,3,4,5,9};
    int n = 6;
    sorting(arr, n);
    return 0;
}