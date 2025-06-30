#include <bits/stdc++.h>
using namespace std;

class Student
{
    public:
    string name;
    int roll;
    int marks;
};

// Custom Compare Function
bool cmp(Student l, Student r)
{
    // if(l.marks > r.marks)
    // {
    //     return true;
    // }
    // else
    // {
    //     return false;
    // }
    return l.roll < r.roll ? l.marks < r.marks : l.marks > r.marks;
}

int main()
{
    int n;
    cin >> n;
    Student arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].name >> arr[i].roll >> arr[i].marks;
    }
    sort(arr,arr+n, cmp);
    for (int i = 0; i < n; i++)
    { 
        cout << arr[i].name << " " << arr[i].roll << " " << arr[i].marks << endl;
    }
    
    
    return 0;
}