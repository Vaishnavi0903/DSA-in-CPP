#include <iostream>
using namespace std;

void peakIndexInAMountainArray(int arr[] , int n)
{
        int s =0;
        int e = n-1;
        int mid = s + ((e-s)/2);

        while(s<e)
        {
            if(arr[mid]<arr[mid+1])
            {
                s = mid+1;
            }
            else
            {
                e = mid;
            }

            mid = s + ((e-s)/2);

        }

    
    cout<<"Peak Index: "<<e;
}

int main()
{
    int n = 9;
    int arr[] = {0,1,2,5,4,3,2,1,0};

    peakIndexInAMountainArray(arr , n);
    return 0;

}