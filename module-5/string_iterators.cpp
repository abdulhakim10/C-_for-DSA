#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Hello World";
    // for (int i = 0; i < s.size(); i++)
    // {
    //     cout << s[i] << endl;
    // }

    for (auto ite = s.begin(); ite < s.end(); ite++)
    {
        cout << *ite << endl;
    }
    // for (string :: iterator ite = s.begin(); ite < s.end(); ite++)
    // {
    //     cout << *ite << endl;
    // }
    
    
    return 0;
}