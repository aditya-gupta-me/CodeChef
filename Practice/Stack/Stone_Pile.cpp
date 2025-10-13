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
void solve(vector<int> vec, int n)
{
    stack<int> st;
    vector<int> p;
    int len;

    for (int val : vec)
    {
        st.push(val);
    }

    int move = 0;

    while (st.size() != 1)
    {
        // aman chance/move
        if (move == 0)
        {
            // cout << "came here 1" << endl;
            int num = st.top();
            st.pop();

            // 1 move for Aman
            while (st.size() > 0)
            {
                p.insert(p.begin(), st.top());
                st.pop();
            }

            // the top moved to last
            st.push(num);

            len = p.size() - 1;

            while (len >= 0)
            {
                st.push(p[len--]);
            }

            p.clear();

            // move 2
            st.pop();
            move = 1;
        }

        else
        {
            // cout << "came here 2" << endl;

            int num1 = st.top();
            st.pop();
            int num2 = st.top();
            st.pop();

            // 2 moves for Akshat
            while (st.size() > 0)
            {
                p.insert(p.begin(), st.top());
                st.pop();
            }

            // the top moved to last
            st.push(num1);
            st.push(num2);

            len = p.size() - 1;

            while (len >= 0)
            {
                st.push(p[len--]);
            }

            p.clear();

            // move 2
            st.pop();
            move = 0;
        }
    }

    cout << move << " " << st.top() << "\n";
}

int main()
{
    FAST_IO;

    int T = 1;
    cin >> T; // uncomment for multiple test cases

    while (T--)
    {
        // n -> size of array
        int n;
        cin >> n;

        vector<int> vec(n);
        for (int i = n - 1; i >= 0; i--)
        {
            int num;
            cin >> num;
            vec[i] = num;
        }

        // for (int val : vec)
        // {
        //     cout << val << " ";
        // }

        // cout << endl;
        solve(vec, n);
    }

    return 0;
}
