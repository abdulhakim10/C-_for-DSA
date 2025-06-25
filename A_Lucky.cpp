#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int sum_1 = 0;
        int sum_2 = 0;
        int first_3 = n / 1000;
        int last_3 = n % 1000;

        for (int i = 0; i <= 3; i++)
        {
            int digit = first_3 % 10; // 123 % 10 = 3
            sum_1 += digit;        // sum = 3
            first_3 /= 10;        // first_3 = 123 / 10 = 12 (last digit removed)


            int dig = last_3 % 10;
            sum_2 += dig;
            last_3 /= 10;
        }

        cout << (sum_1 == sum_2 ? "YES" : "NO") << endl;
    }

    return 0;
}