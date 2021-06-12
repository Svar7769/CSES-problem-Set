#include <iostream>
#include <algorithm>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    ll n,m;
    cin >> n >> m;

    vector <int> tickets(n);
    vector <int> customer(m);
    set <pair <int ,int>> sortedTickets;

    for(int i = 0; i < n; i++) {
        cin >> tickets[i];
        sortedTickets.insert({tickets[i],i});
    }

    for (int i = 0; i < m; i++) {
        cin >> customer[i];
    }

    for (int i = 0; i < m; i++) {
        auto match = sortedTickets.lower_bound({customer[i]+1,0});
        if (match == sortedTickets.begin()) {
            cout << -1 << "\n";
        } else {
            match--;
            cout << (*match).first << "\n";
            sortedTickets.erase(match);
        }
    }


    return 0;
}