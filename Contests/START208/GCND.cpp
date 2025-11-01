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
const int MAX_VAL = 10000001;

int spf[MAX_VAL];
int counts[MAX_VAL];
int multCounts[MAX_VAL];
int suffixCounts[MAX_VAL];

vector<int> divisors;

void sieve()
{
    iota(spf, spf + MAX_VAL, 0);
    for (int i = 2; i * i < MAX_VAL; ++i)
    {
        if (spf[i] == i)
        {
            for (int j = i * i; j < MAX_VAL; j += i)
            {
                if (spf[j] == j)
                {
                    spf[j] = i;
                }
            }
        }
    }
}

void getDivisors(int n)
{
    divisors.clear();
    vector<pair<int, int>> primeFactors;
    int temp = n;
    while (temp != 1)
    {
        int p = spf[temp];
        int count = 0;
        while (temp % p == 0)
        {
            temp /= p;
            count++;
        }
        primeFactors.pb({p, count});
    }

    divisors.pb(1);
    for (auto [p, count] : primeFactors)
    {
        int currentSize = sz(divisors);
        for (int i = 0; i < currentSize; ++i)
        {
            ll currentDivisor = divisors[i];
            for (int j = 1; j <= count; ++j)
            {
                currentDivisor *= p;
                divisors.pb(currentDivisor);
            }
        }
    }
}

void solve()
{
    int n;
    cin >> n;
    vector<int> aUnique;
    int maxVal = 0;

    for (int i = 0; i < n; ++i)
    {
        int val;
        cin >> val;
        if (counts[val] == 0)
        {
            aUnique.pb(val);
        }
        counts[val]++;
        maxVal = max(maxVal, val);
    }

    vector<int> touchedMults;
    for (int val : aUnique)
    {
        getDivisors(val);
        for (int d : divisors)
        {
            if (multCounts[d] == 0)
            {
                touchedMults.pb(d);
            }
            multCounts[d] += counts[val];
        }
    }

    suffixCounts[maxVal + 1] = 0;
    for (int i = maxVal; i >= 1; --i)
    {
        suffixCounts[i] = suffixCounts[i + 1] + counts[i];
    }

    int ans = 1;
    for (int z = maxVal; z >= 1; --z)
    {
        int totalNonMultiples = n - multCounts[z];
        if (totalNonMultiples < 2)
        {
            continue;
        }

        int geZNonMultiples = suffixCounts[z] - multCounts[z];

        if (geZNonMultiples >= 1)
        {
            ans = z;
            break;
        }
    }

    cout << ans << "\n";

    for (int val : aUnique)
    {
        counts[val] = 0;
    }
    for (int d : touchedMults)
    {
        multCounts[d] = 0;
    }
}

int main()
{
    FAST_IO;

    sieve();

    int T = 1;
    cin >> T; // uncomment for multiple test cases

    while (T--)
    {
        solve();
    }

    return 0;
}