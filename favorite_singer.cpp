#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> vec(n);
    for(int i = 0; i < n; i++){
        cin >> vec[i];
    }

    map<int , int>mp;

    for(int i : vec){
        mp[i]++;
    }

    for(auto i : mp){
        cout<< i.first << i.second << endl;
    }

    int high = 0;
    for(auto i : mp){
        if(i.second >= high){
            high = i.second;
            cout << high;
        }
    }
    cout << high << endl;
}