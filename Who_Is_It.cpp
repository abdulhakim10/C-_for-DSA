#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    int id;
    char name[100];
    char section;
    int total_marks;
};

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        Student a, b, c;
        cin >> a.id >> a.name >> a.section >> a.total_marks;
        cin >> b.id >> b.name >> b.section >> b.total_marks;
        cin >> c.id >> c.name >> c.section >> c.total_marks;

        Student topper = a;

        if (b.total_marks > topper.total_marks || (b.total_marks == topper.total_marks && b.id < topper.id)) {
            topper = b;
        }

        if (c.total_marks > topper.total_marks || (c.total_marks == topper.total_marks && c.id < topper.id)) {
            topper = c;
        }

        cout << topper.id << " " << topper.name << " " << topper.section << " " << topper.total_marks << endl;
    }

    return 0;
}
