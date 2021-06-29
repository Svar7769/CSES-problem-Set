#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
    int n, x;
    cin >> n>> x;

    multiset<ll> lights, length;
    // added start and end stop
    lights.insert(0);
    lights.insert(n);
    length.insert(n);

    for(int i=0; i<x; i++){
        int q;
        cin >> q;

        // find stop ahead and at last of the current stop
        auto it = lights.upper_bound(q);
        auto it1 = it;
        it1--;
        
        // finding the previous distance
        ll diff = *it - *it1;

        // removing original length
        length.erase(length.find(diff));

        // inserting stop in the light
        lights.insert(q);
        // inserting new lengths in length
        length.insert(q - *it1);
        length.insert(*it - q);

        // printing the longest distance which is the element in the multi set.       
        cout << (*length.rbegin()) << " ";
    }
}