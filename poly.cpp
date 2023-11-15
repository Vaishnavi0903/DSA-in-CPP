#include<iostream>
using namespace std;

int main()
{
    int n,arr[n];
    cout<<"enter no. of terms in poly1:";
    cin>>n;
    cout<<"enter the terms in increasing order in poly1:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int m,brr[m];
    cout<<"enter no. of terms in poly2:";
    cin>>m;
    cout<<"enter the terms in increasing order in poly2:";
    for(int i=0;i<m;i++)
    {
        cin>>brr[i];
    }
    
    int k=0 ,crr[k];
    int i=0 , j=0 ;
    while(i<n and j<m )
    {
        if (i==j)
        {
            crr[k]=arr[i]+brr[j];
            i++;
            j++;
            k++;
        }
        if(i<j)
        {
            crr[k]=brr[j];
            j++;
            k++;
        }
        if (i>j)
        {
            crr[k]=arr[i];
            i++;
            k++;
        }
    }
    cout<<"resultant of array:";
    for(int a=0;a<k;a++)
    {
        cout<<crr[a]<<" ";
    }
    return 0;
}