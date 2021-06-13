#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<int, int> &a, pair<int, int> &b) {
    return (a.second < b.second);  
}

int main () {
    int n;
    cin >> n;

    vector<pair <int , int>> intervals(n);
    for (int i = 0; i < n; i++) 
        cin  >> intervals[i].first >> intervals[i].second;

    sort(intervals.begin(), intervals.end(), cmp);

    int i = 0;
    int lastendtime = -1;
    int cnt = 0;

    while(i < n) {
        if (intervals[i].first >= lastendtime){
            cnt++;
            lastendtime = intervals[i].second;
            i++;
        }else 
            i++;
    }

    cout << cnt << "\n";
}