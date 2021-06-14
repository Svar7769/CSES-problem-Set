#include  <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    int n;
    cin >> n;

    ll sum = 0;
    ll arr[n];

    for (int i = 0; i < n; i++) 
        {
            cin >> arr[i];
        }

    sort(arr, arr + n);

    // Use median 

    ll avg = arr[n/2];
    sum = 0;

    for (int i = 0; i < n; i++)
        sum += abs(arr[i] - avg);

    cout << sum << endl;
}