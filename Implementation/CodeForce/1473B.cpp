#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;
    while (q--)
    {
        string s, t;
        cin >> s >> t;

        if (s + t != t + s)
        {
            cout << -1 << "\n";
            continue;
        }

        int lenS = s.size();
        int lenT = t.size();
        int L = lenS / __gcd(lenS, lenT) * lenT;

        string ans = "";

        for (int i = 0; i < L / lenS; i++)
        {
            ans += s;
        }

        cout << ans << "\n";
    }

    return 0;
}