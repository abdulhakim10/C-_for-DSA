#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int max = INT_MIN;
    int min = INT_MAX;
    int min_idx, max_idx = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] > max)
        {
            max = arr[i];
            max_idx = i;
        }
        if (arr[i] < min)
        {
            min = arr[i];
            min_idx = i;
        }
    }

    // swap
    swap(arr[min_idx], arr[max_idx]);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
    
    return 0;
}