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
    int bc = 0;
    int c_len = 0;
    int l_len = 0;

    // iterate
    for (int i = 0; i < n; ++i)
    {
        if (s[i] == '1')
        {
            if (i == 0 || s[i - 1] == '0')
            {
                bc++;
                c_len = 1;
            }
            else
            {
                c_len++;
            }
            l_len = c_len;
        }
        else
        {
            c_len = 0;
        }
    }

    if (bc == 0)
    {
        cout << "Yes\n";
    }
    else if (bc >= 2)
    {
        cout << "Yes\n";
    }
    else
    {
        if (l_len == 2 || l_len == 3)
        {
            cout << "No\n";
        }
        else
        {
            cout << "Yes\n";
        }
    }
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
        string s;
        cin >> s;
        solve(n, s);
    }

    return 0;
}