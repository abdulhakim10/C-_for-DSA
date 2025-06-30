#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int a[5] = {1, 2, 3, 4, 5};
    // reverse(a, a+5);
    // for(int rarr : a){
    //     cout << rarr << " ";
    // }

    string s = "Hello";
    reverse(s.begin(), s.end());
    for(char rs : s){
        cout << rs;
    }
    return 0;
}