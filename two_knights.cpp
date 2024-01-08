#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    cout << 0 << endl;

    for (ll i = 2; i < n + 1; i++)
    {
        ll total_pos = ((i * i) * (i * i - 1)) / 2;
        ll atk_pos = 4 * (i - 2) * (i - 1);
        ll res = total_pos - atk_pos;
        cout << res << endl;
    }
}