#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int cls;
    string section;
    int id;
    int math_marks;
    int eng_marks;
};
bool cmp(Student l, Student r)
{
    int l_total = l.math_marks + l.eng_marks;
    int r_total = r.math_marks + r.eng_marks;
    return (l_total == r_total) ? l.id < r.id : l_total > r_total;
}
int main()
{
    int n;
    cin >> n;
    Student arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].name >> arr[i].cls >> arr[i].section >> arr[i].id >> arr[i].math_marks >> arr[i].eng_marks;
    }
    sort(arr, arr + n, cmp);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i].name << " " << arr[i].cls << " " << arr[i].section << " " << arr[i].id << " " << arr[i].math_marks << " " << arr[i].eng_marks << endl;
    }

    // int n;
    // cin >> n;
    // int a[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> a[i];
    // }
    // sort(a,a+n);
    // for (int i = 0; i < n; i++)
    // {
    //     cout << a[i] << " ";
    // }
    // sort(a, a+n, greater<int>());
    // cout << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << a[i] << " ";
    // }

    return 0;
}