#include<bits/stdc++.h>
using namespace std;
int* fun()  // here used (*) with data type to return array's 0 index location address return
{
    int *a = new int[5];
    int i = 0;
    while (cin >> a[i])
    {
       i++;
    }
    return a;
}
int main()
{
    int *x = fun();     // here used pointer to receive array's location address of 0 index.
    for (int i = 0; i < 5; i++)
    {
        cout << x[i] << " ";
    }
    
    return 0;
}