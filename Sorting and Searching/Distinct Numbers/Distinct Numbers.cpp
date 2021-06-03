#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,count;
    cin >> n;
    int arr [n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];   
    }


    sort(arr, arr + n);

    for (int i = 1; i<=n; i++) {
        if (arr[i] != arr[i-1]) ++count;
    }

    cout << count << endl;
}