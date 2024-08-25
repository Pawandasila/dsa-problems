#include <bits/stdc++.h>

using namespace std;

#define ll long long

vector<long long> sum(1000001, 0);
vector<long long> freq(1000001, 0);

int main()

{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n, i, j, ans, l, r, q;
    cin >> n;

    vector<long long> a(n);

    for (i = 0; i < n; i++){

        cin >> a[i];

        freq[a[i]]++;
    }

    for (i = 0; i < n; i++){

        sum[freq[a[i]]] += a[i];
    }

    for (i = 2; i <= 1000000; i++){

        sum[i] = sum[i] + sum[i - 1];
    }

    cin >> q;

    while (q--){

        cin >> l >> r;

        ans = sum[r];

        if (l > 0)

            ans = ans - sum[l - 1];

        cout << ans << "\n";
    }
}
