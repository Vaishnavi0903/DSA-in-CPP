#include <iostream>
using namespace std;

string numstring(int num)
{

    string str;
    switch (num)
    {
    case 0:
        str = "Zero";
        break;
    case 1:
        str = "One";
        break;
    case 2:
        str = "Two";
        break;
    case 3:
        str = "Three";
        break;
    case 4:
        str = "Four";
        break;
    case 5:
        str = "Five";
        break;
    case 6:
        str = "Six";
        break;
    case 7:
        str = "Seven";
        break;
    case 8:
        str = "Eight";
        break;
    case 9:
        str = "Nine";
        break;
    }

    return str;
}

int main()
{
    int num;
    cout<<"Enter the number: "<<endl;
    cin>>num;
    string str ;
    while(num!=0)
    {
        int ans = num % 10;
        str = numstring(ans) + " " + str; 
        num = num/10;
    }

    cout<<str;
}