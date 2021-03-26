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
    int p[n];
    ll sum = 0, total = 0;
    rep(i, 0, n - 1)
    {
        cin >> p[i];
        total += p[i];
    }
    rep(i, 1, (1 << n) - 1)
    {
        ll s = 0;
        rep(j, 0, n - 1)
        {
            if (i & (1 << j))
            {
                s += p[j];
            }
        }
        if (s <= total / 2)
        {
            sum = max(sum, s);
        }
    }

    cout << total - (2 * sum) << endl;
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