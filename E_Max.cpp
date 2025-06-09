#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int max_val = a[0];
    for (int i = 1; i < n; i++)
    {
        max_val = max(max_val, a[i]);
    }

    cout << max_val;
    
    
    
    return 0;
}