#include <bits/stdc++.h>
using namespace std;
void shift_zeros(int arr[], int n)
{
    int idx = 0;
    // shift non zero values to left
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            arr[idx] = arr[i];
            idx++;
        }
    }
    // Fill the rest of the array with zeros
    while (idx < n)
    {
        arr[idx] = 0;
        idx++;
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    shift_zeros(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}