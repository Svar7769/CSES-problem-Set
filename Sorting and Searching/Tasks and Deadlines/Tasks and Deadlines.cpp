// Gready algorithm
#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    int n;
    cin >> n;

    vector<pair<int,int>> task(n);
    for (int i = 0; i < n; i++){
        cin >> task[i].first >> task[i].second;
    }
    
    // sorting on the basis of duration
    sort (task.begin(), task.end());

    ll time = 0;
    ll score = 0;

    for (int i = 0; i < n; i++){
        time += task[i].first;
        score += (task[i].second - time);
    }

    cout << score << endl;
}