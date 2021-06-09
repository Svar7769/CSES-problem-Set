#include <iostream>
#include <algorithm>

#define ll long long

using namespace std;

const int M = 1e9+7;

ll power(ll x, ll y)
{
    ll res = 1;

    x = x % M;

    while (y > 0)
    {
        if (y & 1)
            res = (res * x) % M;

        y = y >> 1;
        x = (x * x) % M;
    }
    return res;
}



int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        ll n,m;
        ll sol;

        cin >> n >> m;
        sol = power((power(2,n)-1),m);
        cout << sol << endl;
    }

    return 0;

}