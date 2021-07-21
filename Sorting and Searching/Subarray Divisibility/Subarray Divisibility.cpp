//finding remainder in prefix[i]%n in map
#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    ll n;
    cin >> n;

    vector<ll> v(n);
    map<ll, ll> mp;
    ll sum=0;

    // creating prefix sum array
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    ll cnt = 0;
    mp[0]++;

    for (int i = 0; i < n; i++)
    {
        sum += v[i]%n;
        sum = (sum+n)%n;
        cnt += mp[sum];
        mp[sum]++;
    }
    cout << cnt << endl;
}