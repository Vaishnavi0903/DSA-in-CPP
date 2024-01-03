// Using binary search

#include <iostream>
using namespace std;

int binarySearch(int x)
{
    // int d = x/2;         // fails for n = 1;

    int s = 0;
    int e = x;
    int mid = s + e / 2;
    int ans = -1;

    while (s <= e)
    {
        int num1 = mid * mid;

        if (num1 == x)
        {
            return mid;
        }
        else if (num1 < x)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }

        mid = (s + e) / 2;
    }

    return ans;
}

double precise(int x, int sol, int precision)
{
    double factor = 1;
    double ans = sol;
    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;

        for (double j = ans; j * j < x; j = j + factor)
        {
            ans = j;
        }
    }

    return ans;
}

int main()
{
    int x;
    cin >> x;
    int sol = binarySearch(x);
    cout << "Answer is : " << precise(x, sol, 3);
    return 0;
}
