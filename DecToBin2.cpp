#include<iostream>
using namespace std;

void decimaltobinary(int num)
{
    int numBits = sizeof(num)*8;
    for(int i = numBits - 1 ; i>=0 ; --i)
    {
        int bit = (num >> i) & 1;
        cout<<bit;
    }
}
int main()
{
    int n ;
    cin>>n;
    cout<<"Binary Represesntation: ";
    decimaltobinary(n);

    return 0;
}



// ----------- Inbuilt function to convert any decimal number to binary------------

//#include<bitset>
// int main()
// {
//     bitset<32>binaryNum;
//     unsigned long decimalVal = 10;
//     binaryNum = decimalVal;
//     cout<<binaryNum;
//     return 0;
// }