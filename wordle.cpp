#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string hidden;
        string guess;
        cin >> hidden >> guess;

        for(int i = 0 ;i < hidden.size();i++){
            if(hidden[i] == guess[i]){
                cout <<"G";
            }else{
                cout << "B";
            }
        }

        cout << endl;

    }
}
