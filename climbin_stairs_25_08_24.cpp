#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>

using namespace std;

int t[46];

int solve(const int n){
    // if(n < 0) return 0;
    // if(n == 0) return 1;
    // // this is recursion method which will give tle so we will memoize it
    // if(t[n] != -1) return t[n];


    // int one = solve(n-1);
    // int two = solve(n-2);
    // return one + two;

    // memoize
    // int one = solve(n-1);
    // int two = solve(n-2);
    // return t[n] = one + two;


    // bottom-up solution

    if(n == 1 || n == 2 || n == 3) return n;

    vector<int> dp(n+1 , -1);
    dp[0] = 0 , dp[1] = 1 , dp[2] = 2 , dp[3] = 3;
    for(int i = 4 ; i<= n; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }

    return dp[n];   
}

int main() {
    int n;
    cin >> n;

    // memset(t , -1 , sizeof(t));

    cout << solve(n);
    
    return 0;
}