#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    bool is_palindrome = true;
    for (int i = 0, j = s.size() - 1; i < j; i++, j--)
    {
        if (s[i] != s[j])
        {
            is_palindrome = false;
        }
    }

    cout << (is_palindrome ? "YES" : "NO");

    return 0;
}