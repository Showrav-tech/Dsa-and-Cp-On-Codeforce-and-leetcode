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
        int n;
        cin >> n;

        bool ok = false;

        for (int x = 0; x * 2020 <= n; x++)
        {
            int rem = n - x * 2020;
            if (rem % 2021 == 0)
            {
                ok = true;
                break;
            }
        }

        cout << (ok ? "YES\n" : "NO\n");
    }
    return 0;
}