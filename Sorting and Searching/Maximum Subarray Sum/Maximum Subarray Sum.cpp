#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main () {

    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    ll ending = 0;  
    ll max = -INFINITY;

    for (int i = 0; i < n; i++) {
        ending = ending + arr[i];
        if (max < ending)
            max = ending;
        if (ending < 0) {
            ending = 0;
        }
    }

    cout << max << endl;
}