#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

struct range{
    int l,r,index;
    bool operator<(const range &other) const
    {
        if (l == other.l)
            return r > other.r;
        return l < other.l;
    }
};

int main() {
    int n;
    cin >> n;

    vector<range> ranges(n);
    ordered_set<pair<int,int>> v;
    // inserting in range
    for (int t = 0; t < n; t++)
    {
        cin >> ranges[t].l;
        cin >> ranges[t].r;
        ranges[t].index = t;
    }
    // sorting range
    sort(ranges.begin(), ranges.end());

    int contains[n], contained[n];

    // contained top to down
    for(int i = 0; i < n; i++){
        v.insert({ranges[i].r, -1*i});
        contained[ranges[i].index] = v.size() - v.order_of_key({ranges[i].r,-1*i}) - 1;
    }

    // clear v
    v.clear();

    // contains bottm to top
    for(int i = n-1; i >= 0; i--){
        v.insert({ranges[i].r,-1*i});
        contains[ranges[i].index] = v.order_of_key({ranges[i].r,-1*i});
    }

    for(auto i : contains){
        cout << i << " ";
    }

    cout << "\n";

    for(auto i : contained){
        cout << i << " ";
    }
}