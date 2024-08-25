#include <bits/stdc++.h>
using namespace std;

bool isVowel(char c)
{
    return c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'Y';
}

int main()
{
    char s[10];

    cin >> s;

    if (strlen(s) != 9)
    {
        cout << "invalid";
        return 0;
    }

    if (isVowel(s[2]))
    {
        cout << "invalid";
        return 0;
    }

    int positions[4][2] = {{0, 1}, {3, 4}, {4, 5}, {7, 8}};

    for (auto &pos : positions)
    {
        if (!isdigit(s[pos[0]]) || !isdigit(s[pos[1]]))
        {
            cout << "invalid";
            return 0;
        }

        int sum = (s[pos[0]] - '0') + (s[pos[1]] - '0');
        if (sum % 2 != 0)
        {
            cout << "invalid";
            return 0;
        }
    }

    cout << "valid";
    return 0;
}
