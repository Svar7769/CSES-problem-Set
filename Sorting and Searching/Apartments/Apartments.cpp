#include <iostream>
#include <algorithm>

#define ll long long

using namespace std;

int main()
{
    int n, m;
    ll k, ways=0;

    cin >> n >> m >> k;

    ll a[n], b[m];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    sort(a, a + n);
    sort(b, b + m);

    int i=0,j=0;

    while (i<n && j<m) {
        if (abs(a[i]-b[j]) <= k) {
            ++j; ++i;
            ++ways;
        }
        else{
            if(a[i]-b[j] > k) {
                ++j;
            }else {
                i++;
            }
        }
    }

    cout << ways << "\n";
}