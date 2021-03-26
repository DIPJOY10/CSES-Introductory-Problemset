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
    int n;
    cin >> n;
    vector<string> ans;
    ans.pb("0");
    ans.pb("1");
    for (int i = 2; i < (1 << n); i *= 2)
    {
        for (int j = i - 1; j >= 0; j--)
        {
            ans.pb(ans[j]);
        }
        for (int j = 0; j < i; j++)
        {
            ans[j] = "0" + ans[j];
        }
        for (int j = i; j < 2 * i; j++)
        {
            ans[j] = "1" + ans[j];
        }
    }

    for (auto x : ans)
    {
        cout << x << endl;
    }
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