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

void solve(int n, int m, string s)
{
    int c0 = 0, c1 = 0;
    for (char ch : s)
    {
        if (ch == '0')
            c0++;
        else
            c1++;
    }

    int t = n - m; // remaining matches

    // to find integer x such that:
    // c0 + x = c1 + (t - x)
    // => 2x = c1 + t - c0
    // => x = (c1 + t - c0) / 2

    int numerator = c1 + t - c0;

    // to check if numerator is even and x in range [0, t]
    if (numerator % 2 == 0)
    {
        int x = numerator / 2;
        if (x >= 0 && x <= t)
        {
            cout << "Yes\n";
            return;
        }
    }

    cout << "No\n";
}

int main()
{
    FAST_IO;

    int T = 1;
    cin >> T; // uncomment for multiple test cases

    while (T--)
    {
        int n, m;
        cin >> n >> m;
        cin.ignore();
        string s;
        getline(cin, s);
        solve(n, m, s);
    }

    return 0;
}