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
void solve(string s)
{
    int n = s.length();
    stack<int> st;

    string expr = "";

    for (int i = 0; i < n; i++)
    {
        char ch = s[i];

        if (isalpha(ch))
        {
            expr += ch;
        }

        else if (ch == '(')
        {
            st.push(ch);
        }

        else if (ch == ')')
        {
            while (!st.empty() && st.top() != '(')
            {
                expr += st.top();
                st.pop();
            }
            if (!st.empty())
            {
                st.pop();
            }
        }

        else
        {
            st.push(ch);
        }
    }

    while (!st.empty())
    {
        expr += st.top();
        st.pop();
    }

    cout << expr << "\n";
}

int main()
{
    FAST_IO;

    int T = 1;
    cin >> T; // uncomment for multiple test cases

    while (T--)
    {
        string s;

        cin >> s;
        solve(s);
    }

    return 0;
}