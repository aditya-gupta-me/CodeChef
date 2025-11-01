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

using ull = unsigned long long;

inline void shift_left(const vector<ull> &src, vector<ull> &dst, int words, ull last_mask)
{
    ull carry = 0;
    for (int i = 0; i < words; ++i)
    {
        ull val = src[i];
        dst[i] = (val << 1) | carry;
        carry = val >> 63;
    }
    dst[words - 1] &= last_mask;
}

inline void shift_right(const vector<ull> &src, vector<ull> &dst, int words)
{
    ull carry = 0;
    for (int i = words - 1; i >= 0; --i)
    {
        ull val = src[i];
        dst[i] = (val >> 1) | carry;
        carry = (val & 1ULL) ? (1ULL << 63) : 0ULL;
    }
}

bool is_balanced(const string &s)
{
    int bal = 0;
    for (char c : s)
    {
        if (c == '0')
        {
            bal++;
        }
        else
        {
            bal--;
            if (bal < 0)
            {
                return false;
            }
        }
    }
    return bal == 0;
}

bool can_one_operation(const string &s)
{
    int n = sz(s);
    int size = n + 1;
    int words = (size + 63) / 64;
    ull last_mask = (size % 64 == 0) ? ~0ULL : ((1ULL << (size % 64)) - 1ULL);
    vector<ull> b0(words, 0), b1(words, 0), next0(words, 0), next1(words, 0), tmp(words, 0);
    b0[0] |= 1ULL;
    for (char c : s)
    {
        fill(all(next0), 0ULL);
        fill(all(next1), 0ULL);
        if (c == '0')
        {
            shift_left(b0, tmp, words, last_mask);
            for (int i = 0; i < words; ++i)
            {
                next0[i] = b0[i] | tmp[i];
            }
            next0[words - 1] &= last_mask;
            shift_left(b1, next1, words, last_mask);
        }
        else
        {
            shift_right(b0, next0, words);
            next0[words - 1] &= last_mask;
            shift_right(b1, tmp, words);
            for (int i = 0; i < words; ++i)
            {
                next1[i] = b1[i] | tmp[i] | b0[i];
            }
            next1[words - 1] &= last_mask;
        }
        b0.swap(next0);
        b1.swap(next1);
    }
    return (b0[0] & 1ULL) || (b1[0] & 1ULL);
}

// solve function for each test case
void solve(int n, const string &s)
{
    // yo start from here,
    // don't worry, you gonna solve this one too

    if (is_balanced(s))
    {
        cout << 0 << "\n";
        return;
    }
    if (can_one_operation(s))
    {
        cout << 1 << "\n";
        return;
    }
    cout << 2 << "\n";
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