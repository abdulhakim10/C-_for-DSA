#include<bits/stdc++.h>
using namespace std;
int main()
{
    // int a[5]; // static array
    int *a = new int[5]; //dynamic array
    int i = 0;
    while (cin >> a[i])
    {
        i++;
    }
    

    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
    
    
    return 0;
}