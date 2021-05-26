#include <iostream>

#define  ll long long

using namespace std;

int main()
{
    ll t;
    ll a,b;
    cin >> t;

    while(t>0) {
        cin >> a >> b;

        if (max(a,b) > 2*min(a,b)){
            cout << "NO" << endl;
        }else if((a+b)%3==0) {
            cout << "YES" << endl;
        }else {
            cout << "NO" << endl;
        }

        t--;
    }

    return 0;
}
