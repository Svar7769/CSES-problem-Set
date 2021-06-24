#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> tower;

    while(n--){
        int cur;
        cin >> cur;

        auto it = upper_bound(tower.begin(), tower.end(), cur);
        // if no smaller value available
        if (it == tower.end())
            tower.push_back(cur); // create tower
        else
            *it = cur; // update the last size of the min tower
    }

    cout << tower.size() << endl;
}