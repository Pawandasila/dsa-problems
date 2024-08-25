#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;

int t[101];

// int rob(vector<int> &v, int i, int n){

//     // recursion
//     if (i >= n)
//         return 0;

//     // memoizeing it
//     if(t[i]!= -1) return t[i];

//     int loot_house = v[i] + rob(v, i + 2, n);
//     int skip_house = rob(v, i + 1, n);

//     // Print statements are useful for debugging but can be removed in final version
//     cout << "skip_house " << skip_house << endl;
//     cout << "loot_house " << loot_house << endl;
//     cout << "max is " << max(skip_house , loot_house) << endl;

//     return t[i] = max(skip_house, loot_house);
// }

// bottom-up approach
int FindMaxSum(vector<int> &arr, int n)
{
    vector<int> t(n+1,0);
    t[0] = 0;
    t[1] = arr[0];

    for (int i = 2; i <= n ; i++)
    {
        int skip = t[i - 1];
        int steal = t[i - 2] + arr[i - 1];

        t[i] = max(skip, steal);
    }

    return t[n];
}

int main()
{
    vector<int> house = {1, 2, 3, 1};
    int n = house.size();
    cout << "1,2,3,1";
    memset(t, -1, sizeof(t));
    // cout << rob(house, 0, n) << endl;
    cout << FindMaxSum(house, n) << endl;

    return 0;
}
