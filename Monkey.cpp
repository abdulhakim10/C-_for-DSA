#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s[100001];
    while (cin.getline(s, 100001))
    {
        char x[100001];
        int idx = 0;

        for (int i = 0; s[i]; i++)
        {
            if (s[i] != ' ')
            {
                x[idx] = s[i];
                idx++;
            }
        }

        x[idx] = '\0';

        sort(x, x + strlen(x));
        cout << x << endl;
    }

    return 0;
}
