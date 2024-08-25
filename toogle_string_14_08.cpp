// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string num;
//     cin >> num;

//     string str ="";

//     for(char c : num){
//         if(isupper(c)){
//             str.push_back(tolower(c));
//         }if(islower(c)){
//             str.push_back(toupper(c));
//         }
//     }

//     cout << str << endl;
// }

// altenate method

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string num;
    cin >> num;

    string str = "";

    for (char c : num)
    {
        if (c >= 'A' && c <= 'Z')
        {
            str.push_back(c + 32);
        }
        else if (c >= 'a' && c <= 'z')
        {
            str.push_back(c - 32);
        }
    }

    cout << str << endl;
}