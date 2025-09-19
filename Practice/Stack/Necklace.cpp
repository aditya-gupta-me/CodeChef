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
        int n, k;
        cin >> n >> k;
        stack<int> st;
        vector<int> vec;

        for (int i = 0; i < n; i++)
        {
            int ele;
            cin >> ele;

            vec.push_back(ele);
        }

        if (n != k)
        {

            for (int i = n - 1; i >= k; i--)
            {
                st.push(vec[i]);
            }

            while (!st.size() == 0)
            {
                cout << st.top() << " ";
                st.pop();
            }

            for (int i = 0; i < k; i++)
            {
                cout << vec[i] << " ";
            }
        }

        else
        {
            for (int val : vec)
            {
                cout << val << " ";
            }
        }

        cout << endl;

        solve();
    }

    return 0;
}