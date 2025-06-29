#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int even = 0, odd = 0, opp = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            arr[i] % 2 != 0 ? odd++ : even++;
        }

        if (n % 2 != 0)
        {
            cout << -1;
        }
        else
        {
            if (odd == n || even == n)
            {
                opp += n / 2;
            }
            else
            {
                if (odd != n / 2 || even != n / 2)
                {
                    opp++;
                }
            }
            cout << opp << endl;
        }
    }

    return 0;
}