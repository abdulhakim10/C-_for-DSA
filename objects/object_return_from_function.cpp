#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int roll;
    int cls;
    int gpa;
    // constructor
    Student(int roll, int cls, double gpa)
    {
        this->roll = roll; // this-> is short cut of (*this)
        (*this).cls = cls;
        this->gpa = gpa;
    }
};

Student fun()
{
    Student karim(24, 5, 3.9);
    return karim;
}
int main()
{
    Student rahim(23, 5, 3.8);
    Student obj = fun();

    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;
    cout << obj.roll << " " << obj.cls << " " << obj.gpa << endl;
    return 0;
}