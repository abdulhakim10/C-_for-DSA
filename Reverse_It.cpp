#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int cls;
    string section;
    int id;
};
int main()
{
    int n;
    cin >> n;
    Student arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].name >> arr[i].cls >> arr[i].section >> arr[i].id;
    }
    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        string temp = arr[i].section;
        arr[i].section = arr[j].section;
        arr[j].section = temp;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i].name << " " << arr[i].cls << " " << arr[i].section << " " << arr[i].id << endl;
    }

    return 0;
}