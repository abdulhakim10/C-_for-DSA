#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, cnt = 0, balloon = 0;
        cin >> n;
        string s;
        cin >> s;
        string alp = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        int frq[26] = {0};

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; alp[j] != '\0'; j++)
            {
                if (alp[j] == s[i])
                {
                    frq[j]++;
                }
            }
        }

        for (int nf : frq)
        {
            if (nf > 0)
            {
                balloon += nf;
                cnt++;
            }
        }
        cout << balloon + cnt << endl;
    }

    return 0;
}


// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n, balloon = 0;
//         string s;
//         cin >> n >> s;

//         int frq[26] = {};
//         for (char c : s)
//             frq[c - 'A']++;

//         for (int i = 0; i < 26; i++)
//             if (frq[i])
//                 balloon += frq[i] + 1;

//         cout << balloon << endl;
//     }
//     return 0;
// }
