#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, result;
    char op, eq;
    cin >> a >> op >> b >> eq >> c;

    if (op == '+') result = a + b;
    else if (op == '-') result = a - b;
    else result = a * b;

    cout << (result == c ? "Yes" : to_string(result));
    return 0;
}
