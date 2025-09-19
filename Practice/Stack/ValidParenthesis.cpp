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
bool isValid(string s)
{
    stack<char> st;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            st.push(s[i]);
        }
        else if (st.size() > 0 && s[i] == ')' && st.top() == '(')
        {
            st.pop();
        }
        else if (st.size() > 0 && s[i] == '}' && st.top() == '{')
        {
            st.pop();
        }
        else if (st.size() > 0 && s[i] == ']' && st.top() == '[')
        {
            st.pop();
        }
    }
    return st.empty();
}

int main()
{
    FAST_IO;

    int T;
    cin >> T; // uncomment for multiple test cases
    cin.ignore();

    while (T-- > 0)
    {
        string s;

        getline(cin, s);

        if (isValid(s))
        {
            cout << 1 << "\n";
        }

        else
        {
            cout << 0 << "\n";
        }
    }

    return 0;
}