#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <stack>

using namespace std;

// bool isPalindrome(string str , int start , int end ){
//     if(start >= end){
//         return true;
//     }

//     if(str[start] != str[end]){
//         return false;
//     }

//     return isPalindrome(str , start+1 , end-1);
// }

bool usingStack(string& input ){
    stack<char> st;
    for (char c : input)
    {
        st.push(c);
    }
    int i = 0;
    while (!st.empty())
    {
        if (input[i] != st.top())
        {
            return false;
        }
        i++;
        st.pop();
    }

    return true;
}

int main() {
    string input;
    cin >> input;

    // using reverse function

    // string palin = input;

    // reverse(palin.begin(), palin.end());

    // if(input == palin){
    //     cout<<"YES";
    // }else{
    //     cout << "NO";
    // }


    // using two pointer

    // int i = 0 , j = input.length();
    // bool found = true;
    // while(i < j) {
    //     if(input[i] != input[j]) {
    //         found = false;
    //         break;
    //     }
    //     i++;
    //     j--;
    // }

    // if(found){
    //     cout << "YES";
    // }else{
    //     cout << "NO";
    // }


    // usinig recursion

    // if (isPalindrome(input, 0, input.length() - 1))
    // {
    //     cout << "The string is a palindrome." << endl;
    // }
    // else
    // {
    //     cout << "The string is not a palindrome." << endl;
    // }

    // using stack

    if (usingStack(input))
    {
        cout << "The string is a palindrome." << endl;
    }
    else
    {
        cout << "The string is not a palindrome." << endl;
    }
    


    return 0;
}