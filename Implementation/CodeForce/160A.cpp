#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }

    sort(a.begin(), a.end(), greater<int>());

    int t = 0;
    int s = 0;

    for (int i = 0; i < n; i++)
    {
        t += a[i];
        s++;
        if (t > sum - t)
        {
            break;
        }
    }

    cout << s << endl;
    return 0;
}
