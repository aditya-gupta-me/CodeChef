#include <bits/stdc++.h>
using namespace std;

// fast I/O
#define FAST_IO                  \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);

// aliases
#define ll long long
#define ld long double
#define pb push_back
#define all(x) x.begin(), x.end()
#define sz(x) ((int)(x).size())

// constants
const int MOD = 1e9 + 7;
const int INF = 1e9 + 5;
const ll LINF = 1e18;

// debug (uncomment to use)
// #define debug(x) cerr << #x << " = " << x << endl

// solve function for each test case
void solve()
{
    // yo start from here,
    // don't worry, you gonna solve this one too

    int n;
    cin >> n;

    vector<pair<ll, int>> v(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i].first;
        v[i].second = i;
    }

    sort(all(v));

    vector<ll> ans(n);

    ans[v[0].second] = -1;

    ans[v[n - 1].second] = -1;

    for (int i = 1; i < n - 1; ++i)
    {
        ll val = v[i].first;
        int idx = v[i].second;

        ll pv = v[i - 1].first;
        ll nv = v[i + 1].first;

        ans[idx] = (val + nv) / 2 - (pv + val) / 2;
    }

    for (int i = 0; i < n; ++i)
    {
        cout << ans[i] << " ";
    }
    cout << "\n";
}

int main()
{
    FAST_IO;

    int T = 1;
    cin >> T; // uncomment for multiple test cases

    while (T--)
    {
        solve();
    }

    return 0;
}