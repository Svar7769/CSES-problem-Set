// approch
// we loop i and j and match if the remaing sum is present in the map
#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
    int n, x;
    cin >> n >> x;
    vector<int> v(n);

    for(int i = 0; i < n; i++)
        cin >> v[i];

    map<int, pair<int, int>> values;

    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if (values.count(x - v[i] - v[j])){
                // Print Four Indices
                cout << i+1 << " " << j+1 << " " 
                    << values[x-v[i]-v[j]].first + 1 << " "
                    << values[x - v[i]-v[j]].second + 1;
                return 0;
            }
        }
        // inserting pair to the map
        for(int j = 0; j < i; j++){
            values[v[i]+v[j]] = {i,j};
        }
    }
    cout << "IMPOSSIBLE";
}