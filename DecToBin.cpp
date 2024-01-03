// Only for positive Numbers

#include <cmath>
#include <iostream>
#include <vector>
#include <algorithm>
#include<string>
using namespace std;

string DecimalToBinary(int num)
{
    string str;
    while (num)
    {
        if (num & 1)
        {
            str += '1';
        }
        else
        {
            str += '0';
        }

        num = num >> 1;
    }

    return str;
}

int main()
{
    // Approach 1 : ---------------------------------------------------------------------------
    // vector <int> myarr;
    // int n , remain;
    // cout<<"Enter positive number: ";
    // cin>>n;

    // int i=0;
    // while(n!=0)
    // {
    //      remain = n%2;
    //      myarr.push_back(remain);
    //      n = n/2;
    //      i++;
    // }

    // std::reverse(myarr.begin() , myarr.end());
    // cout<<"It's binary conversion is: ";
    // for(int i : myarr)
    // {
    //     cout<<i;
    // }

    // Approach 2 : -------------------------------------------------------------------------------
    int n;
    cin >> n;
    string str = DecimalToBinary(n);
    reverse(str.begin(),str.end());
    cout<<str;

    return 0;
}