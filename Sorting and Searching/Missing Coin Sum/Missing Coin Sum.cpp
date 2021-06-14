#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main () {
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) 
        cin >> arr[i];

    sort (arr, arr + n);

    ll res = 1;

    for (int i = 0; i < n && arr[i] <= res ; i++)
        res += arr[i];

    cout << res << endl;
}