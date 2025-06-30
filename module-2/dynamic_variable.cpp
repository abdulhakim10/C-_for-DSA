#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x = 10;
    int *p = new int; // 1st int for what pointer data type and 2nd one to declare what kind of data type store into heap memory.
    *p = 100; // dereferenced
    cout << *p << endl;
    return 0;
}