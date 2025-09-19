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
        vector<int> colors(n);
        unordered_map<int, int> freq;

        for (int i = 0; i < n; i++)
        {
            cin >> colors[i];
            freq[colors[i]]++;
        }

        int diffFromOne = n - freq[1];
        int answer = diffFromOne;

        for (auto &p : freq)
        {
            int c = p.first;
            int f = p.second;
            int time = 1 + (n - f);
            if (time < answer)
                answer = time;
        }
        cout << answer << "\n";
    }
}