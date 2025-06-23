#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        string s, t;
        cin >> s >> t;
        
        int max_len = max(s.size(), t.size());

        for (int i = 0; i < max_len; i++)
        {
            if (i < s.size()) cout << s[i];
            if (i < t.size()) cout << t[i];
        }
        
        cout << endl;
    }

    return 0;
}