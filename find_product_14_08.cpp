#include<bits/stdc++.h>
using namespace std;
int main(){
    int num ;
    cin >> num;

    const int MOD = 1000000007;

    vector<int> vec(num);
    long long product = 1;
    for(int i = 0 ; i < num ;i++){
        cin >> vec[i];
        product = (product* vec[i]) % (MOD);
    }

    cout<< product << endl;
}