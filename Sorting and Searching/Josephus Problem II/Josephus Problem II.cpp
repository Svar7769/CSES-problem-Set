#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define ll long long

int main() {
    ll n, k;
    cin >> n >> k;

    ordered_set<ll> v;

    for (int i = 1; i <= n; i++){
        v.insert(i);
    }

    int end = k % v.size();


    while (v.size() > 1){;
        auto t = v.find_by_order(end);
        cout << *t << " ";
        v.erase(t);
        end = (end + k) % v.size();
    } 

    for ( auto i : v){
        cout << i << " ";
    }    
}