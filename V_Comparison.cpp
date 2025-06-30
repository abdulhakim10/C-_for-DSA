#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    char s;
    cin >> a >> s >> b;

    cout << ((s == '>' && a > b) || (s == '<' && a < b) || (s == '=' && a == b) ? "Right" : "Wrong");
    return 0;
}