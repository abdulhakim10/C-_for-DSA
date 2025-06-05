#include <bits/stdc++.h>
using namespace std;
int main()
{
    int *a = new int[3];
    int i = 0;
    while (cin >> a[i])
    {
        i++;
    }

    int *b = new int[5];
    for (int i = 0; i < 3; i++)
    {
        b[i] = a[i];
    }
    b[3] = 40;
    b[4] = 50;

    for (int i = 0; i < 5; i++)
    {
        cout << b[i] << " ";
    }
    delete[] a;
    cout << endl;

    return 0;
}