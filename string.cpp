#include<bits/stdc++.h> // if call this header file no need to call other header files.
using namespace std;

int main()
{
    int x;
    cin >> x;
    cin.ignore();
    char s[100];
    // cin >> s;
    // fgets(s,100,stdin);
    cin.getline(s,100);
    cout << s << endl << x << endl;
    return 0;
}