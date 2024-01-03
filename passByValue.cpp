#include<iostream>
using namespace std;

void dummy(int n)
{
    n = n*10;
    cout<<"n is: "<<n<<endl;
}

int main()
{
    int n;
    cin>>n;

    dummy(n); 
    //Value is only modified in the function.

    cout<<"Number n is: "<<n<<endl;
    return 0;
}