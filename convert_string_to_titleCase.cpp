// #include <iostream>
// #include <vector>
// #include <string>
// #include <sstream>
// #include <algorithm>

// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     cin.ignore();
//     while (t--) {

//         string str;
//         getline(cin, str);

//         vector<string> tokens;

//         stringstream ss(str);
//         string token = "" ;

//         while(getline(ss , token , ' ')){
//             tokens.push_back(token);
//         }

//         for(int i = 0; i < tokens.size(); i++){
//             tokens[i][0] = toupper(tokens[i][0]);
//         }

//         for(int i = 0; i < tokens.size(); i++){
//             cout << tokens[i] << " ";
//         }
//     }
    
    
//     return 0;
// }

#include <iostream>
#include <string>
#include <sstream>
#include <cctype>

using namespace std;

string convertToTitleCase(const string &str){
    stringstream ss(str);
    string word;
    string result;

    while (ss >> word){
        bool isAcronym = true;
        for (char c : word){
            if (!isupper(c)){
                isAcronym = false;
                break;
            }
        }

        if (isAcronym){

            if (!result.empty())
                result += " ";
            result += word;
        }
        else{

            if (!result.empty())
                result += " ";
            if (!word.empty()){
                word[0] = toupper(word[0]);
                for (size_t i = 1; i < word.length(); ++i){
                    word[i] = tolower(word[i]);
                }
            }
            result += word;
        }
    }

    return result;
}

int main(){
    int t;
    cin >> t;
    cin.ignore();

    while (t--){
        string str;
        getline(cin, str);
        cout << convertToTitleCase(str) << endl;
    }

    return 0;
}
