#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int j = 0;

    for (int i = 0; i < n; i++)
    {
        int y;
        cin >> y;
        if (5 - y >= k)
        {
            j++;
        }
    }

    cout << j / 3 << endl;
    return 0;
}