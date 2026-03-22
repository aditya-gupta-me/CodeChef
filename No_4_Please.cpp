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

        // vector<int> vec(n);
        unordered_map<int, int> freq;

        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            freq[num]++;
        }

        int count = 0;

        for (const auto &pair : freq)
        {
            if (pair.first == 2 && pair.second >= 2)
            {
                count += pair.second - 1;
            }
            else if (pair.first == 1 && freq.count(3) >= 1)
            {
                if (freq.count(3) > freq.count(1))
                {
                    count += freq[1];
                    freq[1] = 0;
                }
                else if (freq.count(1) > freq.count(3))
                {
                    count += freq[3];
                    freq[3] = 0;
                }
                else
                {
                    count += freq[1];
                    freq[1] = 0;
                }
            }
        }

        cout << count << "\n";

        // solve();
    }

    return 0;
}