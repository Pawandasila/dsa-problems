#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

int main() {
    string str;
    cin >> str;

    // using map
    // map<char , int> mp;

    // for(char ch : str){
    //     mp[ch]++;
    // }

    // vector<int>c;

    // for(auto ch: mp){
    //     c.push_back(ch.second);
    // }

    // if(c[0] == 2*c[1]){
    //     cout << "Yes" << endl;
    // }else{
    //     cout << "No" << endl;
    // }

    // without using map

    // vector<int>mp(26 , 0);

    // for(char ch : str){
    //     mp[ch-'a']++;
    // }

    // for(int i = 0 ; i < 26 ; i++){
    //     if(mp[i] > 0){
    //         cout << static_cast<char>(i+'a') << mp[i] << endl;
    //     }
    // }

    // usign count function

    int count_a = count(str.begin() , str.end() , 'z');
    int count_b = count(str.begin() , str.end() , 'o');
    
    // cout << count_a <<endl;
    // cout << count_b <<endl;

    if(count_a == 2*count_b){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

    
    return 0;
}