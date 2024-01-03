#include<iostream>
#include<vector>
using namespace std;

void bubbleSort(vector<int>arr , int n )
{
    for(int i = 0; i<n ; i++)
    {  
        bool swapped = false;
        for(int j = 0 ; j<n-i-1 ;j++)
        {
             if (arr[j+1]<arr[j])
             {
                swap(arr[j+1],arr[j]);
                swapped=true;
             }
        }
        if(swapped==false) 
        {   // if the input array is already sorted , then in first round we will understand and no need to further check
            break;
        }
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

    bubbleSort(arr , n);
    return 0;
}