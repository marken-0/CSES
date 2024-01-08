#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define MOD 1000000007

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    ll res = 1;
    cin >> n;

    for (int i = 0; i < n; i++) // Doing (2^n) % MOD is same as (2%MOD)*(2%MOD)*(2%MOD).... 'n' times.
    {
        res *= 2;
        res %= MOD;
    }
    cout << res << endl;
}