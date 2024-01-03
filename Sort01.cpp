#include<iostream>
using namespace std;

void sort01(int arr[] , int n)
{
    int low = 0;
    int high = n-1;

    while(low<=high)
    {
        if(arr[low]==0)
        {
            low++;
        }
        else if(arr[high]==1)
        {
            high--;
        }
        else if (arr[high]==0)
        {
            swap(arr[low],arr[high]);
            high--;
            low++;
        }
    }
    for(int i = 0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }

    sort01(arr,n);
    return 0;
}