#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    int frq = 0;
    int min_val = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] < min_val)
        {
            min_val = a[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] == min_val)
        {
            frq++;
        }
    }
    if (frq % 2 != 0)
    {
        cout << "Lucky";
    }
    else
    {
        cout << "Unlucky";
    }

    return 0;
}