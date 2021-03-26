//author: Dipjoy Basak
//dip_10

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long
#define ld long double
#define pb push_back
#define mp make_pair
#define vi vector<int>
#define pi pair<int, int>
#define vpi vector<pair<int, int>>
#define rep(i, l, r) for (int i = l; i <= r; i++)
#define rrep(i, r, l) for (int i = r; i >= l; i--)
#define debug(x) cout << x << "debug" << endl;
#define maxn 1000005

void solve()
{
    string s;
    cin >> s;
    int n = s.length();
    vi f(26);
    rep(i, 0, n - 1)
    {
        f[s[i] - 'A']++;
    }
    int cnt = 0, j = 0;
    rep(i, 0, 25)
    {
        if (f[i] % 2)
        {
            cnt++;
            j = i;
        }
    }
    if (cnt > 1)
    {
        cout << "NO SOLUTION" << endl;
        return;
    }
    string ans = "";
    rep(i, 0, 25)
    {
        if (f[i] % 2 == 0)
        {
            rep(j, 1, f[i] / 2)
            {
                ans += (char)(i + 'A');
            }
        }
    }
    if (cnt == 1)
    {
        rep(i, 1, f[j])
            ans += (char)(j + 'A');
    }
    rrep(i, 25, 0)
    {
        if (f[i] % 2 == 0)
        {
            rep(j, 1, f[i] / 2)
            {
                ans += (char)(i + 'A');
            }
        }
    }
    cout << ans << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}