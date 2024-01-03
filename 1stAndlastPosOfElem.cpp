#include <bits/stdc++.h> 
#include<iostream>
using namespace std;

#include <bits/stdc++.h> 

int firstOccurence(vector<int>& arr, int n, int key)
{
    int start = 0;
    int end = n-1;
    int ans1 = -1;

    int mid = start + ((end-start)/2);

    while(start<=end)
    {
        if(arr[mid]==key)
        {
            ans1 = mid;
            end = mid-1;
        }
        else if (arr[mid]<key)
        {
            start = mid+1;
        }
        else
        {
            end = mid-1;
        }

        mid = start + ((end-start)/2);
    }
    return ans1;


}

int lastOccurence(vector<int>& arr, int n, int key)
{
    int start = 0;
    int end = n-1;
    int ans2 = -1;

    int mid = start + ((end-start)/2);

    while(start<=end)
    {
        if(arr[mid]==key)
        {
            ans2 = mid;
            start = mid+1;
        }
        else if (arr[mid]<key)
        {
            start = mid+1;
        }
        else
        {
            end = mid-1;
        }

        mid = start + ((end-start)/2);
    }

    return ans2;
}
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    pair<int , int> result;

    int index1 = firstOccurence( arr ,  n,  k);
    int index2 = lastOccurence(arr ,  n,  k);

    if(index1 == -1 and index2 == -1)
    {
        result.first = -1;
        result.second = -1;
        return result;
    }
    else
    {
        result.first = index1;
        result.second = index2;
    }
 
    return result;
}

int main()
{
    return 0;
}