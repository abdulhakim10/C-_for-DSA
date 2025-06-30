#include <bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string name;
    int roll;
    int math;
    int english;

    Student(string name, int roll, int math, int english)
    {
        (*this).name = name;
        this->roll = roll;
        this->math = math;
        this->english = english;
    }
    void total()
    {
        cout << "Total marks of " << name << " = " << math + english << endl;
    }
};
int main()
{
    Student anam("Anam Ibn Jafar", 1, 80, 82);
    anam.total();
    
    return 0;
}