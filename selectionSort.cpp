#include<iostream>
#include<vector>
using namespace std;

void selectionSort(vector<int>arr , int n )
{
    for(int i = 0; i<n ; i++)
    {   int minIndex = i;
        for(int j = i+1 ; j<n ; j++)
        {
              if(arr[j]<arr[minIndex])
              {
                minIndex = j;
              }
        }
        swap (arr[i] , arr[minIndex]);
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    vector<int>arr;
    int n ;
    int a;
    cout<<"Enter size of array: "<<endl;
    cin>>n;

    for(int i =0;i<n;i++)
    {
        cin>>a;
        arr.push_back(a);
    }

    selectionSort(arr , n);
    return 0;
}