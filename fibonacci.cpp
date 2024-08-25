#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int solve(int n , vector<int>& dp){

    // recursive

    // if(n <= 1){
    //     return n;
    // }
    // return solve(n-1)+solve(n-2);

    // dp usng memoisation

    // if(n <= 1){
    //     return n;
    // }
    

    // if(dp[n] != -1){
    //     return dp[n];
    // }

    // return dp[n] = solve(n-1 , dp)+solve(n-2 , dp);

    // dp using bottom-up algorithm

    if (n <= 1)
        return n;

    dp[0] = 0;
    dp[1] = 1;

    for(int i = 2 ; i <= n ; ++i){
        dp[i] = dp[i-1]+dp[i-2];
    }

    return dp[n];

}

int main() {
    int n;
    cin >> n;

    // fiibonacci using iterative method

    // int a = 0 , b = 1 , c;
    // for(int i = 2; i <= n; i++){
    //     c = a+b;
    //     a = b;
    //     b = c;
    // }

    // cout << b;

    // fibonacci using recursive and dp

    vector<int> dp(n+1);

    cout << solve(n , dp);
    
    
    return 0;
}