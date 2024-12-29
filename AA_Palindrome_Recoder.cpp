#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin >> s;
    map<char, int> mp;
    for (auto it : s)
        mp[it]++;
    int cnt = 0;
    for (auto it : mp)
    {
        if (it.second % 2 == 1)
        {
            cnt++;
            if (cnt > 1)
            {
                cout << "NO SOLUTION\n";
                return;
            }
        }
    }
    string ans = "";
    char x = '#';
    for (auto it : mp)
    {
        for (int i = 0; i < it.second / 2; i++)
        {
            ans.push_back(it.first);
        }
        if (it.second % 2 == 1)
        {
            x = it.first;
        }
    }
    s = ans;
    if (x != '#')
        s += x;
    reverse(ans.begin(), ans.end());
    s += ans;
    cout << s << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}


