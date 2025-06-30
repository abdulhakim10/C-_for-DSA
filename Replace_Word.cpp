#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b, pattern;
        cin >> a >> b;

        for (size_t i = 0; i < a.length();)
        {
            if (a.substr(i, b.length()) == b)
            {
                pattern += '#';
                i += b.length();
            }
            else
            {
                pattern += a[i];
                i++;
            }
        }
        cout << pattern << endl;
    }

    return 0;
}