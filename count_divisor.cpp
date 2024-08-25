#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int l , r , k;

    cin >> l >> r >> k;

    // if(k < 1) cout<< "0";

    // int count = 0;

    // for(int i = l; i <= r ;i++){
    //     if(i%k == 0){
    //         count++;
    //     }
    // }
    
    // cout<<count<<endl;

    //Compute how many multiples of k are there from 1 to r (r / k).
    // Compute how many multiples of k are there from 1 to l-1 ((l - 1) / k).
    // The difference between these two values gives the count of multiples in the range [l, r].

    int count = (r / k) - ((l - 1) / k);

    cout << count << endl;

    return 0;
}