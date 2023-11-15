#include <iostream>
using namespace std;
int main()
{
    int i, j, sizepoly1, sizepoly2;
    cout << "enter the number of terms in poly1" << endl;
    cin >> sizepoly1;
    cout << "enter the number of terms in poly2" << endl;
    cin >> sizepoly2;

    int a[sizepoly1], b[sizepoly2], p[sizepoly1 + sizepoly2];

    for (int i = 0; i < sizepoly1; i++)
    {
        cout << "enter x^" << i << "coefficient in poly1" << endl;
        cin >> a[i];
    }

    for (int i = 0; i < sizepoly2; i++)
    {
        cout << "enter x^" << i << "coefficient in poly2" << endl;
        cin >> b[i];
    }

    for (int i; i < (sizepoly1 + sizepoly2); i++)
    {
        p[i] = 0;
    }

    for (int i = 0; i < sizepoly1; i++)
    {
        for (int j = 0; j < sizepoly2; j++)
        {
            if (a[i] != 0 && b[i] != 0)
            {
                p[i + j] += a[i] * b[j];
            }
        }

        for (int i = (sizepoly1 + sizepoly2) - 1; i >= 0; i--)
        {
            if (p[i] != 0)
            {
                if (i != 0)
                {
                    if (p[i]>0){
                        cout << p[i] << "x^" << i << " + ";
                    }
                    else{
                        cout << p[i] << "x^" << i ;
                    }
                }
                else
                {
                    cout << p[i];
                }
            }
        }
       
    }
     return 0;
}