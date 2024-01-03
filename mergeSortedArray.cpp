//You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers
//m and n, representing the number of elements in nums1 and nums2 respectively.
//Merge nums1 and nums2 into a single array sorted in non-decreasing order.

#include<iostream>
using namespace std;

void mergeArrays(int arr1[] , int n , int arr2[] , int m , int arr3[])
{
        int i = 0 ;
        int j = 0 ;
        int k = 0 ;

        while(i<n && j<m)
        {
            if(arr1[i]<arr2[j])
            {
                arr3[k]=arr1[i];
                i++;
                k++;
            }
            else
            {
                arr3[k]=arr2[j];
                j++;
                k++;
            }
            
        }

        // Copy remaining elements in the array
        while(i<n)
        {
            arr3[k]=arr1[i];
            k++;
            i++;
        }
        while(j<m)
        {
            arr3[k]=arr2[j];
            k++;
            j++;
        }

        for(int i =0;i<n+m;i++)
        {
            cout<<arr3[i]<<" ";
        }

}

int main()
{
    int arr1[] = {2,3,5};
    int arr2[] = {1,3,6,8};
    int arr3[7];

    mergeArrays(arr1 , 3 , arr2 , 4 , arr3);
}