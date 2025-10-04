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
void solve(vector<int> &vec, int n)
{
    unordered_map<int, int> freq;
    for (int val : vec)
    {
        freq[val]++;
    }

    int count1 = freq[1];
    int count2 = freq[2];
    int count3 = freq[3];

    int total = 0;

    // (1,1) -> sum = 2
    total += (count1 * (count1 - 1)) / 2;

    // (1,2) -> sum = 3
    total += count1 * count2;

    // (2,3) -> sum = 5
    total += count2 * count3;

    cout << total << endl;
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
        vector<int> vec(n);

        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
        }
        solve(vec, n);
    }

    return 0;
}