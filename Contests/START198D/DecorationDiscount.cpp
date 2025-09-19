#include <bits/stdc++.h>
using namespace std;
#include <iostream>
#include <vector>

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        // no of vases
        int n;
        cin >> n;
        vector<int> vases_price;

        for (int i = 0; i < n; i++)
        {
            int n_ith;
            cin >> n_ith;

            vases_price.push_back(n_ith);
        }

        int minCost = INT_MAX;
        int vase1 = vases_price[0];
        for (int i = 1; i < n; i++)
        {
            int currCost = vase1 + (vases_price[i + 1] / 2);
            // cout << "Curr cost: " << currCost << endl;

            if (currCost < minCost && vase1 + vases_price[i] < minCost)
            {
                minCost = vase1 + vases_price[i];
            }
        }

        cout << minCost << endl;
    }
}
