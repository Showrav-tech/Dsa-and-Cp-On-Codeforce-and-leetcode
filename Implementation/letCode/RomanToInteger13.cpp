#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int romanToInt(string s)
    {
        int total = 0;
        int prev = 0;

        for (int i = s.length() - 1; i >= 0; i--)
        {
            int value = 0;

            switch (s[i])
            {
            case 'I':
                value = 1;
                break;
            case 'V':
                value = 5;
                break;
            case 'X':
                value = 10;
                break;
            case 'L':
                value = 50;
                break;
            case 'C':
                value = 100;
                break;
            case 'D':
                value = 500;
                break;
            case 'M':
                value = 1000;
                break;
            }

            if (value < prev)
                total -= value;
            else
                total += value;

            prev = value;
        }

        return total;
    }
};

int main()
{
    Solution sol;
    string s;
    cin >> s;
    cout << sol.romanToInt(s) << endl;
    return 0;
}
