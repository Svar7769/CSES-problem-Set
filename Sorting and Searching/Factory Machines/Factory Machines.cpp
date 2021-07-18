#include <bits/stdc++.h>

using namespace std;

#define ll long long

// Predicate type problem

int main() {
    int n,pro;
    cin >> n >> pro;

    int machine[n];
    for (int i = 0; i < n; i++)
        cin >> machine[i];

    ll low = 0;
    ll hi = 1e18;
    ll answer = 1e18;
    while (low <= hi){
        ll mid = (low + hi) / 2; 
        ll products = 0;
        for(int i=0; i<n; i++){
            products += min(mid/machine[i], (ll)1e9);
        }
        if(products >= pro){
            if (mid < answer)
                answer = mid;
            hi = mid -1 ;
        }
        else 
            low = mid + 1;
    }
    cout << answer << "\n";
}