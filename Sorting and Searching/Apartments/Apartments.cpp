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
        for(int j = lastpos; i<n; i++) {
            if (a[i] <= b[i] | a[i] <= b[i]-k | a[i] <= b[i]+k)
            {
                ways++;
                lastpos = j;
                break;
            }
        }
    }

    cout << ways << "\n";
}