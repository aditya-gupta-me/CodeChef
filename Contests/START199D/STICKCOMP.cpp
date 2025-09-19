#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> bricks(n);
        for (int i = 0; i < n; i++)
        {
            cin >> bricks[i];
        }

        int currentIndex = 0;
        int currentSize = bricks[0];

        for (int i = 1; i < n; i++)
        {
            if (bricks[i] > currentSize)
            {
                currentIndex = i;
                currentSize = bricks[i];
            }
        }

        cout << currentIndex + 1 << "\n";
    }

    return 0;
}