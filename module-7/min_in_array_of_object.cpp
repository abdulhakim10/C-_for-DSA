#include <bits/stdc++.h>
using namespace std;

class Student
{
    public:
    string name;
    int roll;
    int marks;
};

int main()
{
    int n;
    cin >> n;
    Student arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].name >> arr[i].roll >> arr[i].marks;
    }
    Student mn;
    mn.marks = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if(arr[i].marks > mn.marks)
        {
            mn = arr[i]; // here assigned whole object
        }
    }
    
    cout << mn.name << " " << mn.roll << " " << mn.marks << endl;
    
    return 0;
}