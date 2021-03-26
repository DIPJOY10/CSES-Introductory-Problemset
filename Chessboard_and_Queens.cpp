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

int ans = 0;

bool isSafe(char **arr, int n, int x, int y)
{

    // if valid cell
    if (arr[x][y] == '*')
    {
        return false;
    }
    //check top column
    for (int i = 0; i < x; i++)
    {
        if (arr[i][y] == '1')
            return false;
    }
    //check top left diagonal
    int i = x, j = y;
    while (i >= 0 && j >= 0)
    {
        if (arr[i][j] == '1')
            return false;
        i--;
        j--;
    }
    //check top right diagonal
    i = x, j = y;
    while (i >= 0 && j < n)
    {
        if (arr[i][j] == '1')
            return false;
        i--;
        j++;
    }
    return true;
}

void nQueen(char **arr, int n, int x)
{
    if (x == n)
    {
        ans++;
        return;
    }

    for (int c = 0; c < n; c++)
    {
        if (isSafe(arr, n, x, c))
        {

            if (isSafe(arr, n, x, c))
            {
                arr[x][c] = '1';
                nQueen(arr, n, x + 1);
                arr[x][c] = '.';
            }
        }
    }
}
void solve()
{
    char **a = new char *[8];
    rep(i, 0, 7)
    {
        a[i] = new char[8];
    }
    rep(i, 0, 7)
    {
        rep(j, 0, 7)
        {
            cin >> a[i][j];
        }
    }
    nQueen(a, 8, 0);
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