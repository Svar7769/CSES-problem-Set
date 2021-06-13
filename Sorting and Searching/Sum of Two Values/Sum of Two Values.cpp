#include <bits/stdc++.h>

using namespace std;

int main () {
    int n,x;

    cin >> n >> x;

    vector<pair <int , int>> coins(n);

    for (int i = 0; i < n; i++){
        cin >> coins[i].first;
        coins[i].second = i+1;
    }

    sort(coins.begin(), coins.end());

    bool control = true;

    for (int i = 0; i < n; i++){
        if (control){
            for (int j = n - 1; j >= 0; j--){
                if (coins[i].first + coins[j].first == x) {
                    cout << coins[i].second << " " << coins[j].second << "\n";
                    control = false;
                    break;
                }
            }
        }else 
            break;
    }
}