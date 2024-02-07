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

    // freopen("shell.in", "r", stdin);
    // freopen("shell.out", "w", stdout);

    int n;
    cin >> n;
    vector<ll> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());
    // Output
    int count = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] != arr[i + 1])
        {
            count++;
        }
    }
    cout << count << endl;
}