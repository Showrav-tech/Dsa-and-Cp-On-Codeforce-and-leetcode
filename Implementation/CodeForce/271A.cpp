#include <bits/stdc++.h>
using namespace std;

bool isDistinct(int year)
{
    int freq[10] = {0};

    while (year > 0)
    {
        int d = year % 10;
        freq[d]++;
        if (freq[d] > 1)
            return false;
        year /= 10;
    }
    return true;
}

int main()
{
    int y;
    cin >> y;

    while (true)
    {
        y++;
        if (isDistinct(y))
        {
            cout << y << endl;
            break;
        }
    }

    return 0;
}