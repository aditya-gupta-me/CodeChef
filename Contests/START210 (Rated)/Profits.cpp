#include <bits/stdc++.h>
using namespace std;

#define FAST_IO                  \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);

#define ll long long
#define ld long double
#define pb push_back
#define all(x) x.begin(), x.end()
#define sz(x) ((int)(x).size())

const int MOD = 1e9 + 7;
const int INF = 1e9 + 5;
const ll LINF = 1e18;

// debug (uncomment to use)
// #define debug(x) cerr << #x << " = " << x << endl

void solve()
{
    int N, X;
    cin >> N >> X;

    int maxProfit = 0;

    for (int i = 1; i <= N; i++)
    {
        if (i > X)
        {
            maxProfit += (i - X);
        }
    }

    cout << maxProfit << "\n";
}

int main()
{
    FAST_IO;

    int T;
    cin >> T;

    while (T--)
    {
        solve();
    }

    return 0;
}