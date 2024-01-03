#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int num ;
    int ans = 0;
    cin>>num;
    
    int i = 0;
    while(num !=0)
    {
        int remain = num % 10;
        if (remain == 1)
        {
            ans = pow (2 , i) + ans;
        }
        num = num/10;
        i++;
    }
    cout<<ans;
    return 0;
}



