#include <iostream>
#include <cmath>

#define ll long long

using namespace std;

ll power(ll x, ll y, ll p)
{
    ll res = 1; // Initialize result
 
    x = x % p; // Update x if it is more than or
    // equal to p
 
    while (y > 0) {
 
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res * x) % p;
 
        // y must be even now
        y = y >> 1; // y = y/2
        x = (x * x) % p;
    }
    return res;
}

int main () {
    int n;
    cin >> n;
    unsigned long long m = 1000000007;
    unsigned long long sol;

    // no of bits can be given by the formula 2**n
    sol = (long long) power(2,n,m);
    cout << sol << endl;

    return 0;
}