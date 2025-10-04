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
bool solve(string m, string w)
{
    // john johanna
    int i = 0, j = 0;
    while (i < m.length() && j < w.length())
    {
        if (m[i] == w[j])
        {
            i++;
        }

        j++;
    }

    return i == m.length();
}

int main()
{
    FAST_IO;

    int T = 1;
    cin >> T; // uncomment for multiple test cases

    while (T--)
    {
        cin.ignore();
        string m, w;
        cin >> m >> w;

        if (solve(m, w) || solve(w, m))
        {
            cout << "YES" << "\n";
        }

        else
        {
            cout << "NO" << "\n";
        }
    }

    return 0;
}