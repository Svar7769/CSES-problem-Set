#include <iostream>

#define  ll long long  


using namespace std;



int main()
{
    ll n,m=1e9+7;
    cin >> n;
    ll count = 0;

    // counting NO odf Fives Which will be equal to no of zeros 
    for(ll i=5; n/i >= 1; i *= 5) {
        count += n/i;
    }

    cout << count << "\n";

    return 0;
}
