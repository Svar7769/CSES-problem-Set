#include <iostream>
#include <algorithm>

#define  ll long long

using namespace std;

int main() {
    int n,m,ways=0;
    ll k;

    cin >> n >> m >> k ;

    ll a[n], b[m], no;

    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)    {
        cin >> b[i];
    }

    sort(a, a+n);
    sort(b,b+m);

    int lastpos = 0;

    for (int i = 0; i < m; i++) {
        for(int j = lastpos; j<n; j++) {
            if (a[j] >= b[i]-k && a[j] <= b[i]+k)
            {
                ways++;
                lastpos = j+1;
                break;
            }
            if (b[i] <= a[i]-k) {
                break;
            }
        }
    }

    cout << ways << "\n";
}