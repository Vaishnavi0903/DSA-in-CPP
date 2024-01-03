#include<iostream>
using namespace std;

int pivotElement(int arr[] , int n)
{
    int s = 0;
    int e = n-1;
    int mid = s + ((e-s)/2);
    int ans=-1;

    while(s<=e)
    {
        if(arr[mid] >= arr[0])
        {
            s = mid+1;
        }
        else
        {
            if(arr[mid-1] > arr[mid])
            {
                ans = arr[mid];
                return ans;
            }
            else
            {
                e = mid;
            }
        }
        
        mid = s+((e-s)/2);
    }
    return ans;
}

int main()
{
    int n;
    cin>>n;

    int arr[n];

    for(int i =0 ;i<n ;i++)
    {
        cin>>arr[i];
    }

    cout<<"Pivot element is: "<<pivotElement(arr,n);
}