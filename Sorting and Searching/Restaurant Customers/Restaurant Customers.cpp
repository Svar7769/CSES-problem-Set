#include <bits/stdc++.h>

using namespace std;

int main () {
    int t;
    cin >> t;

    int count,current = 0;

    vector <pair<int , int>> timeline;

    while (t--) {
        int a,b;

        cin >> a;
        timeline.push_back({a,0});
        cin >> b;
        timeline.push_back({b,1});
    }

    sort(timeline.begin(), timeline.end());

    for (auto x: timeline) {
        if (x.second == 0) {
            current += 1;
            count = max(count, current); 
        } else if (x.second == 1 ) {
            current -= 1;
            count = max(count, current);
        }
    }

    cout << count << endl;
}