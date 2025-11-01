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

// solve function for each test case
void solve(int n, int x, int k, vector<int> vec)
{
    sort(vec.begin(), vec.end(), greater<int>());

    for (int i = 0; i < n && k > 0; i++)
    {
        if (vec[i] > x)
        {
            vec[i] = 0;
            x += 100;
            k--;
        }
    }

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (vec[i] > x)
            count++;
    }

    int result = count + 1;
    cout << result << "\n";
}

int main()
{
    FAST_IO;

    int T = 1;
    cin >> T;

    while (T--)
    {
        int n, x, k;
        cin >> n >> x >> k;

        vector<int> vec;
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            vec.pb(num);
        }

        solve(n, x, k, vec);
    }

    return 0;
}