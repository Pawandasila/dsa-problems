#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> vec(n);
        map<int, int> mp;

        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
            mp[vec[i]]++;
        }

        for (const auto& elem : mp)
        {
            if (elem.second == 1)
            {
                cout << elem.first << endl;
                break;
            }
        }
    }
}
