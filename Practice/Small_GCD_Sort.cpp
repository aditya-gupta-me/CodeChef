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
    int n;
    cin >> n;

    vector<pair<int, int>> v;

    for (int i = 1; i <= n; i++)
    {
        int s = __gcd(i, n);
        v.pb({i, s});
    }

    sort(all(v), [](const pair<int, int> &a, const pair<int, int> &b)
         {
        if (a.second != b.second) {
            return a.second > b.second;
        }
        return a.first < b.first; });

    for (int i = 0; i < n; i++)
    {
        if (i > 0)
            cout << " ";
        cout << v[i].first;
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