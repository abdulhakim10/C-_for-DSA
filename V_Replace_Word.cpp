#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    string word = "EGYPT";
    string result = "";

    for (int i = 0; i < s.length();)
    {
        if (s.substr(i, 5) == word)
        {
            result += ' ';
            i += 5;
        }
        else
        {
            result += s[i];
            i++;
        }
    }

    // while (i < s.length()) {
    //     // Check if "EGYPT" starts at position i
    //     if (i + 4 < s.length() && 
    //         s[i] == 'E' && s[i+1] == 'G' && s[i+2] == 'Y' && s[i+3] == 'P' && s[i+4] == 'T') {
    //         result += ' '; // Replace with space
    //         i += 5;        // Skip over "EGYPT"
    //     } else {
    //         result += s[i]; // Add current character
    //         i++;
    //     }
    // }

    cout << result << endl;
    return 0;
}
