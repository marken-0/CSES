#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void make_sub_array(vector<ll> &arr1, vector<ll> &arr2, vector<ll> &arr, ll start, ll iterations)
{
    for (ll i = 0; i < start; i++)
    {
        arr2.push_back(arr[i]);
    }

    for (ll i = start; i < start + iterations; i++)
    {
        arr1.push_back(arr[i]);
    }

    for (ll i = start + iterations; i < arr.size(); i++)
    {
        arr2.push_back(arr[i]);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;

    ll sum = n * (n + 1) / 2; // Calculates the sum of first 'n' natural numbers.
    if (sum % 2 != 0)
    {
        cout << "NO" << endl; // Outputs NO if the sum is odd, as they cannot be divided in required two sets in that case.
        return 0;
    }
    else
    {
        vector<ll> arr(n), arr1, arr2;                          // arr1 and arr2 are the two sets.
        ll start = n / 4;                                       // The first element in the new sub-array will be at index = n/4.
        ll iterations = (n / 2) % 2 == 0 ? n / 2 : (n + 1) / 2; // If n is even, then iterations = n/2, else iterations = (n+1)/2.

        for (ll i = 0; i < n; i++)
        {
            arr[i] = i + 1; // Populating the array with first 'n' natural numbers.
        }

        make_sub_array(arr1, arr2, arr, start, iterations);

        cout << "YES" << endl;
        cout << arr1.size() << endl;
        for (ll i = 0; i < arr1.size(); i++)
        {
            cout << arr1[i] << " ";
        }
        cout << endl;
        cout << arr2.size() << endl;
        for (ll i = 0; i < arr2.size(); i++)
        {
            cout << arr2[i] << " ";
        }
        cout << endl;

        return 0;
    }
}