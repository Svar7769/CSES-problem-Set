#include <bits/stdc++.h>

using namespace std;

struct range{
    int l, r, index;
    bool operator < (const range &other) const{
        if(l == other.l) 
            return r> other.r;
        return l < other.l;
    }
};

int main() {
    int n;
    cin >> n;
    vector<range> ranges(n);
    vector<bool> contains(n);
    vector<bool> contained(n);

    for(int t = 0; t < n; t++){
        cin >> ranges[t].l;
        cin >> ranges[t].r;
        ranges[t].index = t;
    } 

    sort (ranges.begin(), ranges.end());
    int maximum[n],minimum[n];
    
    // for max
    for(int i = 1; i < n; i++){
        if (i==1)
            maximum[i] = ranges[i-1].r;
        else {
            maximum[i] = max(maximum[i-1],ranges[i-1].r);
        }
    }
    // for min
    for(int i = n-2; i >= 0; i--){
        if(i==n-2)
            minimum[i] = ranges[i+1].r;
        else{
            minimum[i] = min(minimum[i+1],ranges[i+1].r);
        }
    }
    maximum[0] = -1;
    minimum[n- 1] = ranges[n-1].r + 1;

    // for contains
    for (int i = 0; i < n; i++){
        if(ranges[i].r >= minimum[i]){
            contains[ranges[i].index] = true;
        }
    }
    // for contained
    for(int i = 0; i < n; i++){
        if(ranges[i].r <= maximum[i]){
            contained[ranges[i].index] = true;
        }
    }

    // print out the contains
    for (int i = 0; i < n; i++) {
        if(contains[i]) cout << 1 << " ";
        else cout << 0 << " ";
    }
    cout << "\n";
    // print out the contained
    for(int i = 0; i < n; i++) {
        if(contained[i]) cout << 1 << " ";
        else cout << 0 << " ";
    }
}