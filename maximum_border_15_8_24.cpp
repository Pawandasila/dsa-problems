#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int getMaxConsecutive(const vector<vector<char>> &grid, int n, int m)
{
    int RowmaxCount = 0;
    int ColmaxCount = 0;


    for (int i = 0; i < n; ++i)
    {
        int count = 0;
        for (int j = 0; j < m; ++j)
        {
            if (grid[i][j] == '#')
            {
                count++;
            }
            else
            {
                RowmaxCount = max(RowmaxCount, count);
                count = 0;
            }
        }
        RowmaxCount = max(RowmaxCount, count);
    }

    
    for (int j = 0; j < m; ++j)
    {
        int count = 0;
        for (int i = 0; i < n; ++i)
        {
            if (grid[i][j] == '#')
            {
                count++;
            }
            else
            {
                ColmaxCount = max(ColmaxCount, count);
                count = 0;
            }
        }
        ColmaxCount = max(ColmaxCount, count);
    }

    return max(ColmaxCount , RowmaxCount);
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<vector<char>> v(n, vector<char>(m));

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                cin >> v[i][j];
            }
        }

        int result = getMaxConsecutive(v, n, m);
        cout << result << endl;
    }

    return 0;
}
