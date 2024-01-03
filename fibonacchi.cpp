#include <iostream>
using namespace std;
int fibonacchi(int n)
{
    int a = 0;
    int b = 1;
    if (n == 1)
    {
        return a;
    }
    if (n == 2)
    {
        return b;
    }
    int sum;
    for (int i = 0; i < n - 2; i++)
    {
        sum = a + b;
        a = b;
        b = sum;
    }
    return sum;
}
int main()
{
    int n = 7; // That means 10 fibonacchi number
    cout << fibonacchi(n);
    return 0;
}
