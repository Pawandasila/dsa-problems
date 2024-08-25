#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;

    if (n <= 0){
        cout << "No" << endl;
        return 0;
    }

    vector<int> vec(n);
    for (int i = 0; i < n; ++i){
        cin >> vec[i];
    }

    if (vec[n - 1] % 10 == 0){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }

    return 0;
}
