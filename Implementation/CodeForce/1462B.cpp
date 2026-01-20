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
        string s;
        cin >> s;

        string target = "2020";
        bool ok = false;

        for (int k = 0; k <= 4; k++)
        {

            string pref = target.substr(0, k);
            string suff = target.substr(k);

            if (s.substr(0, k) == pref && s.substr(n - (4 - k)) == suff)
            {
                ok = true;
                break;
            }
        }

        cout << (ok ? "YES\n" : "NO\n");
    }

    return 0;
}