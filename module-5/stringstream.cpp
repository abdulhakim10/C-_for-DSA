#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    cout << s << endl;

    // stringstream ss, ss << s; is same as stringstream ss(s);
    stringstream ss(s);
    string word;
    int co = 0;
    while (ss >> word)
    {
        cout << word << endl;
        co++;
    }
    cout << co << endl;
    
    return 0;
}