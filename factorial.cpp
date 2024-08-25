#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int solve(int n){
    if(n == 1 || n == 0){
        return 1;
    }

    return n*solve(n-1);
}

int main() {
    int n;
    cin >> n;

    // using iterative mathod 

    // T.C --> O(n);
    // s.C ---> o(1);

    // int sum= 1;

    // for(int i = 1 ; i <= n ; i++) {
    //     sum*=i;
    // }

    // cout << sum;

    // using recursion

    cout << solve(n);
    
    return 0;
}