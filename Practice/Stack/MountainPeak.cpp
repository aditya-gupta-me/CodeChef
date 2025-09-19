#include <vector>
#include <stack>
#include <iostream>

using namespace std;

vector<int> next_higher_peak(vector<int> &heights)
{
    int n = heights.size();

    stack<int> st;
    vector<int> ans(n, 0);

    // init to -1
    for (int i = 0; i < n; i++)
    {
        ans[i] = -1;
    }

    for (int i = n - 1; i >= 0; i--)
    {
        while (st.size() > 0 && heights[i] >= st.top())
        {
            st.pop();
        }

        if (st.size() > 0)
        {
            ans[i] = st.top();
        }

        st.push(heights[i]);
    }

    return ans;
}

int main()
{
    int n;

    cin >> n; // Read the number of peaks from the user

    vector<int> heights(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> heights[i]; // Read each peak height from the user
    }

    vector<int> result = next_higher_peak(heights); // Call the function to get the result

    // Print result

    for (int height : result)
    {
        cout << height << " "; // Output each element in the result vector
    }
    cout << endl;

    return 0;
}