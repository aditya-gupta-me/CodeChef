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
int solve(int N)
{
    // 2 f = 4 coins
    // 3 f = 5 coins

    if (N == 2)
        return 4;
    if (N == 3)
        return 5;

    int minCost = 1e9;

    for (int a = 0; a <= N / 2; ++a)
    {
        for (int b = 0; b <= N / 3; ++b)
        {
            if (2 * a + 3 * b == N)
            {
                int cost = 4 * a + 5 * b;
                minCost = min(minCost, cost);
            }
        }
    }
    return minCost;
}

int main()
{
    FAST_IO;

    int T;
    cin >> T; // uncomment for multiple test cases

    while (T--)
    {
        int n;
        cin >> n;
        int result = solve(n);
        cout << result << "\n";
    }

    return 0;
}
