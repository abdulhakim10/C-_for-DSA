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
        int min_val = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int val = arr[i] + arr[j] + j - i;
                if (val < min_val)
                {
                    min_val = val;
                }
            }
        }
        cout << min_val << endl;
    }

    return 0;
}