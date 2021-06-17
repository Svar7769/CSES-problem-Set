#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main () {
    int n;
    cin >>  n;

    vector<pair<int, int>> arr;
    int count = 0;
    int input = 0;

    for (int i = 0; i < n; i++){
        cin >> input;
        arr.push_back({input, i+1});
    }

    sort (arr.begin(), arr.end());

    for (int i = 0; i < n; i++){
        if (arr[i].second > arr[i+1].second)
            count++ ;
    } 
    
    if (count == 0)
        count++;

    cout << count << "\n";
}