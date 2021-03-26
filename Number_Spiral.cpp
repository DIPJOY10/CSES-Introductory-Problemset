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
    ll y, x;
    cin >> y >> x;
    ll ans = 0;
    if (y > x)
    {
        if (y % 2)
        {
            ans = (y - 1) * (y - 1) + 1;
            ans += (x - 1);
        }
        else
        {
            ans = y * y;
            ans -= (x - 1);
        }
    }
    else
    {
        if (x % 2)
        {
            ans = x * x;
            ans -= (y - 1);
        }
        else
        {
            ans = (x - 1) * (x - 1) + 1;
            ans += (y - 1);
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
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}