#include <bits/stdc++.h>

using namespace std;

#define ll long long

int n;

int sol(vector<pair <int, int>> cord) {
    ll MIN, MAX = 0;
    vector<pair<int, int>>cordR(n), prefix(n), suffix(n);
    ll area = 0, sol = 1e9;

    // X - Vertical line
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            MIN = cord[i].second;
            MAX = cord[i].second;
        }
        else
        {
            MIN = min(cord[i].second, prefix[i - 1].first);
            MAX = max(cord[i].second, prefix[i - 1].second);
        }
        prefix[i] = {MIN, MAX};
    }

    for (int i = n - 1; i >= 0; i--)
    {
        if (i == (n - 1))
        {
            MIN = cord[i].second;
            MAX = cord[i].second;
        }
        else
        {
            MIN = min(cord[i].second, suffix[i + 1].first);
            MAX = max(cord[i].second, suffix[i + 1].second);
        }
        suffix[i] = {MIN, MAX};
    }

    // Area for Vertical line
    for (int i = 0; i < n; i++)
    {
        if (n <= 2)
        {
            area = 0;
        }
        else if (i == 0 || i == (n - 1))
        {
            area = abs((cord[1].first - cord[n - 1].first) * (prefix[n - 1].second - prefix[n - 1].first));
        }
        else
        {
            area = abs((cord[i].first - cord[0].first) * (prefix[i].second - prefix[i].first) +
                       (cord[n - 1].first - cord[i + 1].first) * (suffix[i + 1].second - suffix[i + 1].first));
        }

        sol = min(sol, area);
    }

    return sol;
}

int main() {

    int t;
    cin >> t;

    while (t--) {
        cin >> n;

        int sol1, sol2, x, y;
        
        vector <pair <int, int>> cord(n), cordR(n);
        
        for(int i = 0; i < n; i++) {
            cin >> x >> y;
            cord[i].first  = x;
            cord[i].second = y;
            cordR[i].first = y;
            cordR[i].second = x;
        }

        sort (cord.begin(), cord.end());
        sort (cordR.begin(), cordR.end());

        sol1 = sol(cord);
        sol2 = sol(cordR);
        
        cout << min(sol1, sol2) << "\n";
    }

}
