#include <bits/stdc++.h>
using namespace std;

#define FAST_IO                  \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);

void solve(int x, int y)
{
    int sumEven = 0;
    int sumOdd = 0;

    for (int i = x; i <= y; i += x)
    {
        if (i % 2 == 0)
        {
            sumEven += i;
        }
        else
        {
            sumOdd += i;
        }
    }

    if (sumEven >= sumOdd)
    {
        cout << "YES" << "\n";
    }
    else
    {
        cout << "NO\n";
    }
}

int main()
{
    FAST_IO;

    int T;
    cin >> T;

    while (T--)
    {
        int x, y;
        cin >> x >> y;

        solve(x, y);
    }

    return 0;
}