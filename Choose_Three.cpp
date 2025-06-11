#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s;
        cin >> n >> s;
        int a[n];
        bool is_sum = false;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (n < 3)
        {
            cout << "NO";
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = i + 1; j < n; j++)
                {
                    for (int k = j + 1; k < n; k++)
                    {
                        int sum = a[i] + a[j] + a[k];
                        if (sum == s)
                        {
                            is_sum = true;
                        }
                    }
                }
            }
            if (is_sum)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}