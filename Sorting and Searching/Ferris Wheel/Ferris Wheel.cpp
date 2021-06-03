#include <iostream>
#include <algorithm>

using namespace std;

#define ll long long

int main() {
    int n; 
    ll x;
    cin >> n >> x;

    int child[n],solution=0;
    
    for (int i = 0; i < n; i++) 
            cin >> child[i];
    
    int i = 0, j = n-1;

    sort(child , child + n);

    while (j >= i) {
        if( child[j] + child[i] <= x ){
            ++solution;
            --j; ++i;
        }
        else {
            --j;
            ++solution;
        }
    }

    cout << solution << endl;

    return 0;
}