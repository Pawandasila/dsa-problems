#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        int i = 0 , j = 1;

        while(j < n){
            if(s[i] == '0'){
                if(s[j] == '0'){ // 00 ----> A
                    cout<< "A";
                    j = j+2;
                }else if(s[j] == '1'){ // 01 -->T
                    cout<< "T";
                    j = j+2;
                }
                i=i+2;
            }else if(s[i] == '1'){
                if(s[j] == '0'){ // 10 -- >C
                    cout<< "C";
                    j = j+2;
                }else if(s[j] == '1'){ // 11 --> G
                    cout<< "G";
                    j = j+2;
                }
                i=i+2;
            } 
        }
        cout << endl;

    }
}
