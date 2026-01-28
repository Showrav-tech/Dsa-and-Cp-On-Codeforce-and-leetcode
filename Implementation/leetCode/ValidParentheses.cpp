#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> st;

        unordered_map<char, char> mp = {
            {')', '('},
            {'}', '{'},
            {']', '['}};

        for (char c : s)
        {

            if (mp.count(c))
            {

                if (st.empty() || st.top() != mp[c])
                {
                    return false;
                }
                st.pop();
            }

            else
            {
                st.push(c);
            }
        }

        return st.empty();
    }
};

int main()
{
    Solution sol;
    string s;
    cin >> s;
    cout << sol.isValid(s);
    return 0;
}
