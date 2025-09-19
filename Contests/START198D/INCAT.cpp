#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    string s;
    getline(cin, s);

    int count = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'c' || s[i] == 'a' || s[i] == 't')
        {
            count++;
        }
    }
    if (count >= 3)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}