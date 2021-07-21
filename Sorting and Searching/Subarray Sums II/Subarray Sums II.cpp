//Using prefix arrray and map
#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    ll n, x;
    cin >> n >> x;

    vector<ll> v(n),prefix(n+1);
    map<ll, ll> mp;
    prefix[0] = 0;

    // creating prefix sum array
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
        prefix[i+1] += prefix[i]+v[i];
    }

    ll cnt = 0;

    for(int i = 0; i <= n; i++){
        if(mp.count(prefix[i]-x)){
            cnt += mp[prefix[i]-x]; 
        }
        mp[prefix[i]]++;
    }
    cout << cnt << endl;
}