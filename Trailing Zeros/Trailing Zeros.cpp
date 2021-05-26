#include <iostream>

#define  ll long long  


using namespace std;

ll factorial(ll n, ll m) {
    ll result = 1;
    for (int i = 1; i <= n; i++)
        result = (result * i);
 
    return result;
}


int main()
{
    ll n,m=1e9+7;
    cin >> n;

    ll fact = factorial(n,m); 
    ll count = 0;

    // counting Zeroes 
    while(fact%10==0){
        count++;
        fact /= 10; 
    }

    cout << count << "\n";

    return 0;
}
