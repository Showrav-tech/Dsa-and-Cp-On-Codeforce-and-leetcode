#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;

        if (x > 45)
        {
            cout << -1 << "\n";
            continue;
        }

        vector<int> digits;

        for (int d = 9; d >= 1; d--)
        {
            if (x >= d)
            {
                digits.push_back(d);
                x -= d;
            }
        }

        if (x != 0)
        {
            cout << -1 << "\n";
            continue;
        }

        sort(digits.begin(), digits.end());

        for (int d : digits)
            cout << d;
        cout << "\n";
    }

    return 0;
}
