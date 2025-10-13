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
void solve(int n, string s)
{
    int f = -1, l = -1;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            if (f == -1)
                f = i;
            l = i;
        }
    }

    if (f == -1)
    {
        cout << 0 << "\n";
        return;
    }

    int changes = 0;
    for (int i = f; i <= l; i++)
    {
        if (s[i] == '0')
            changes++;
    }

    cout << changes << "\n";
}

int main()
{
    FAST_IO;

    int T = 1;
    cin >> T; // uncomment for multiple test cases

    while (T--)
    {
        int n;
        cin >> n;

        cin.ignore();

        string s;

        getline(cin, s);

        solve(n, s);
    }

    return 0;
}