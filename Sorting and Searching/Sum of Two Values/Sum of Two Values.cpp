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


    int i = 0;
    int j = n-1;
    long long count=0;
    
    while (i != j)
    {
        if (coins[i].first + coins[j].first == x)
        {
            cout << coins[i].second << " ";
            cout << coins[j].second << "\n";
            count++;
            break;
        }
        else if (coins[i].first + coins[j].first > x)
        {
            j--;
            count++;
        }
        else if (coins[i].first + coins[j].first < x)
        {
            i++;
            count++;
        }
    }
    if (i==j)
        cout << "IMPOSSIBLE" << "\n";
    cout << count << "\n";
}