//****************************LINEAR SEARCH**********************
/*
#include <iostream>
using namespace std;

void linearsearch(int arr[], int n)
{

    int temp = -1;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == n)
        {
            cout << "element is at position :" << i + 1 << endl;
            temp = 0;
        }
    }
    if (temp == -1)
    {
        cout << "element not found" << endl;
    }
}
int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    cout << "enter the number you want to search" << endl;
    int num;
    cin >> num;
    linearsearch(arr, num);

    return 0;
}
*/

//******************************BINARY SEARCH*************************************/
/*
#include <iostream>
using namespace std;

int binarysearch(int arr[], int n, int key)
{
    int s = 0;
    int e = n;
    for (int i = 0; i < e; i++)
    {
        int mid;
        mid = (s + e) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
}

int main()
{
    int n;
    cout << "enter the number of elements in array" << endl;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "enter the number u want to search" << endl;
    int key;
    cin >> key;

    cout<<binarysearch(arr, n, key);

    return 0;
}
*/

//***************************************SELECTION SORT******************************
/*
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp;
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    return 0;
}*/

//********************************BUBBLE SORT***********************************************************
/*
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp;
                temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}*/


//***************************INSERTION SORT**************************************************************
/*
#include <iostream>
using namespace std;
int main()
{
    // take input array
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 1; i < n; i++)
    {
        int current = arr[i];
        int j = i - 1;
        while (arr[j] > current)
        {
            int temp;
            temp = arr[j + 1];
            arr[j + 1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
*/

//*************************************************QUICK SORT****************************************************************
/*
#include<iostream>
using namespace std;

void swap(int arr[] , int i , int j)
{
    int temp;
    temp = arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
int partition(int arr[] , int l , int r)
{
      int pivot = arr[r];
      int i = l-1;
      for(int j=l;j<r;j++)
      {
          if (arr[j]<pivot)
          {
               i++;
               swap(arr,i,j); 
          }
      }
      swap(arr,i+1,r);
      return i+1;
}

void quicksort(int arr[], int l,int r)
{
    if (l<r)
    {
      int pi = partition (arr, l, r);
      quicksort(arr, l , pi-1);
      quicksort(arr,pi+1,r);
    }
}
int main(){
    int arr[]={12,34,11,7,43,56};
    quicksort(arr,0,5);
    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
*/

//***************************************SENITELSEARCH*********************************************************
/*
#include<iostream>
using namespace std;
void sentinelsearch(int arr[],int n,int key){
    int last=arr[n-1];
    arr[n-1]=key;
    int i=0;
    while(arr[i]!= key)
    {
          i++;
    }
    arr[n-1]=last;
    if ((i<n-1) || (arr[n-1]==key) ){
        cout<<"key is present at "<<i+1<<"th position"<<endl;
    }
    else{
        cout<<"key not found"<<endl;
    }
}
int main()
{
    int arr[]={0,1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    sentinelsearch(arr,n,8);
    
    return 0;
}
*/

//***************************************************************SHELL SORT***************************************************************
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"entyer no. of elements in array"<<endl;
    cin>>n;
    int arr[n];
    //input array
    cout<<"enter the elements"<<endl;
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int gap = n/2;
    while(gap!=0)
    {
        for (int i=0;i<n;i++)
        {
            if (arr[i]>arr[i+gap])
            {
                 int temp;
                 temp=arr[i+gap];
                 arr[i+gap]=arr[i];
                 arr[i]=temp;
            }
        }
        gap=gap/2;
    }

    for (int i=0;i<n;i++)
    {
          cout<<arr[i]<<" ";
    }
    return 0;
}*/