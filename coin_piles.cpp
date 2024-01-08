#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define ld long double
#define MOD 1000000007

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        ll a, b;
        cin >> a >> b;

        if (a == 0 && b == 0)
        {
            cout << "YES" << endl;
            continue;
        }

        ld big = (ld)max(a, b);
        ld small = (ld)min(a, b);
        if ((a + b) % 3 == 0 && big / small <= 2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
