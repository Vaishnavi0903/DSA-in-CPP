#include <iostream>
using namespace std;

int main()
{
    int amount = 151;
    int n100, n50, n20, n1;
    n100 = n50 = n20 = n1 = 0;

    switch (amount >= 100)
    {
    case 1:
        n100 = amount / 100;
        amount = amount - (n100 * 100);
        break;
    }
    switch (amount >= 50)
    {
    case 1:
        n50 = amount / 50;
        amount = amount - (n50 * 50);
        break;
    }
    switch (amount >= 20)
    {
    case 1:
        n20 = amount / 20;
        amount = amount - (n20 * 20);
        break;
    }
    switch (amount >= 1)
    {
    case 1:
        n1 = amount / 1;
        amount = amount - (n1 * 1);
        break;
    }

    cout << n100 << " - 100Rs Notes" << endl;
    cout << n50 << " - 50Rs Notes" << endl;
    cout << n20 << " - 20Rs Notes" << endl;
    cout << n1 << " - 1Rs Notes" << endl;
    return 0;
}