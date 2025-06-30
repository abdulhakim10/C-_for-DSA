#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, word;
    getline(cin, s);
    stringstream sw(s);
    bool is_name = false;

    while (sw >> word)
    {
        (word == "Jessica") ? is_name = true : false;
    }

    cout << (is_name ? "YES" : "NO");
    return 0;
}