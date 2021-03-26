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
    ll n;
    cin >> n;
    if ((n * (n + 1) / 2) % 2)
    {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    vi v1, v2;
    int flag = 0;
    if (n % 2)
    {
        v1.pb(n);
        n--;
        while (n >= 1)
        {
            if (flag)
            {
                v1.pb(n);
                v1.pb(n - 1);
            }
            else
            {
                v2.pb(n);
                v2.pb(n - 1);
            }
            flag = !flag;
            n -= 2;
        }
    }
    else
    {
        rep(i, 1, n / 2)
        {
            if (i % 2)
            {
                v1.pb(i);
                v1.pb(n + 1 - i);
            }
            else
            {
                v2.pb(i);
                v2.pb(n + 1 - i);
            }
        }
    }
    cout << v1.size() << endl;
    for (auto x : v1)
    {
        cout << x << " ";
    }
    cout << endl;
    cout << v2.size() << endl;
    for (auto x : v2)
    {
        cout << x << " ";
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