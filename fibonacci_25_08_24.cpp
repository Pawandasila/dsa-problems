#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int fib(int n , vector<int>& ans){
    // using dp
    // if(n <= 1) return n;
    // if(ans[n]!= -1) return ans[n];

    // return ans[n] = fib(n-1 , ans)+ fib(n-2 , ans);

    // using bottom-up
    // ans[0] = 0;
    // ans[1] = 1;
    // for(int i = 2 ; i <= n ; i++){
    //     ans[i] = ans[i-1] + ans[i-2];
    // }
    // return ans[n];

    // using constant space
    int a = 0 , b = 1 , c;
    for(int i = 1 ; i < n ; i++){
        c = a+b;
        a = b;
        b = c;
    }
    return c;
    

}

int main() {
    
    int n ;
    cin >> n;

    // using recursion
    // int result = fib(n);

    // using dp

    vector<int>ans(n+1 , -1);
    int result = fib(n , ans);
    cout << result << endl;
    
    return 0;
}