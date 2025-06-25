#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int cnt[5] = {0};

    for (char sc : s)
    {
        switch (tolower(sc))
        {
        case 'e':
            cnt[0]++;
            break;
        case 'g':
            cnt[1]++;
            break;
        case 'y':
            cnt[2]++;
            break;
        case 'p':
            cnt[3]++;
            break;
        case 't':
            cnt[4]++;
            break;
        }
    }
    cout << *min_element(cnt, cnt+5);
    return 0;
}