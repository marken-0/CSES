#include <bits/stdc++.h>

using namespace std;
#define endl '\n'
#define ll long long
#define MOD 1000000007

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    cin >> str;

    vector<ll> freq(256, 0);
    for (ll i = 0; i < str.size(); i++)
    {
        freq[str[i]]++;
    }

    ll odd_count = 0;
    for (auto i : freq)
    {
        if (i % 2 != 0)
        {
            odd_count++;
        }
    }

    if (odd_count > 1)
    {
        cout << "NO SOLUTION" << endl;
        return 0;
    }

    ll odd_idx;

    for (int i = 0; i < 256; i++)
    {
        if (freq[i] % 2 == 0)
        {
            for (ll j = 0; j < freq[i] / 2; j++)
            {
                cout << (char)i;
            }
            freq[i] /= 2;
        }
        else
        {
            odd_idx = i;
        }
    }

    if (odd_count != 0)
    {
        for (int i = 0; i < freq[odd_idx]; i++)
        {
            cout << (char)odd_idx;
        }
        freq[odd_idx] = 0;
    }

    for (int i = 255; i >= 0; i--)
    {
        for (ll j = 0; j < freq[i]; j++)
        {
            cout << (char)i;
        }
    }

    cout << endl;
}
