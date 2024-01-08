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
    cin >> n;
 
    ll count = 0;
    for (int i = 5; i <= n; i *= 5)
    {
        count += n / i;
    }
    cout << count << endl;
}
