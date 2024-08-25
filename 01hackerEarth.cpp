#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, m;

    cin >> n >> m;

    vector<vector<long long int>> v(n);

    unordered_map<int, long long int> mp, mpMax;

    long long int val;

    // read data

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < m; j++)
        {

            cin >> val;

            v[i].push_back(val);
        }
    }

    // average calculation for each line and initialise each line with number 0

    for (int i = 0; i < n; i++)
    {

        val = 0;

        for (int j = 0; j < m; j++)
        {

            val += v[i][j];

            mpMax[j] = 0;
        }

        mp[i] = (val / m);
    }

    // find the max of each column

    vector<int> mx;

    long long int maxV;

    for (int i = 0; i < m; i++)
    {

        maxV = v[0][i];

        for (int j = 0; j < n; j++)
        {

            maxV = max(maxV, v[j][i]);
        }

        mx.push_back(maxV);
    }

    // calculate the number of maximum in each line

    maxV = 0;

    for (int i = 0; i < m; i++)
    {

        for (int j = 0; j < n; j++)
        {

            if (mx[i] == v[j][i])
            {

                mpMax[j]++;

                maxV = max(maxV, mpMax[j]);
            }
        }
    }

    vector<int> mx1;

    for (auto i : mpMax)
    {

        if (i.second == maxV)
        {

            mx1.push_back(i.first);
        }
    }

    if (mx1.size() == 1)
    {

        cout << mx1[0] + 1 << "\n";
    }
    else
    {

        long long int index = mx1[0];

        long long int val1 = mp[index];

        for (int i = 0; i < mx1.size(); i++)
        {

            if (mp[mx1[i]] > val1)
            {

                val1 = mp[mx1[i]];

                index = mx1[i];
            }
        }

        cout << index + 1 << "\n";
    }
}