#include <bits/stdc++.h>
using namespace std;
class Student
{
    public:
    int roll;
    int year;
    double gpa;

    // constructor
    Student(int r, int y, double g)
    {
        roll = r;
        year = y;
        gpa = g;
    }
};
int main()
{
    Student rahim(30, 2027, 4.3);
    cout << rahim.roll << " " << rahim.year << " " << rahim.gpa << endl;
    return 0;
}