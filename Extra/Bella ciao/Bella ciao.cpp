#include <iostream>
using namespace std;
#define ll long long

int main()
{
    // your code goes here
    ll t;
    cin >> t;

    while (t--)
    {

        ll D, d, P, Q, x;

        cin >> D >> d >> P >> Q;

        ll count = 0;
        x = D / d;

        if (x % 2 == 0)
        {

            count = d * ((x / 2) * (2 * P + (x - 1) * Q));
        }
        else
        {
            count = d * (x * (P + ((x - 1) / 2) * Q));
        }

        count += (D % d) * (P + (x)*Q);
        cout << count << endl;
    }
}
