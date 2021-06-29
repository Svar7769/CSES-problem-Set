#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> v;

    for(int i=0; i<n; i++){
        v.push_back(i+1);
    }

    while(v.size() > 1){
        vector<int> survivour;
        for(int i=0; i<v.size(); i++){
            if ( (i+1) % 2 == 0) {
                cout << v[i] << " "; // printing even position
            }
            else survivour.push_back(v[i]); // if odd add to survivour list
        }

        if (v.size() % 2 == 0){
            v = survivour;
        }
        else {
            int start = v.back();
            survivour.pop_back(); // removing last element if odd
            // empty v vector
            v.clear();
            v.push_back(start);
            for (auto i : survivour){
                v.push_back(i);
            }
        }
    }
    cout << v[0] << endl;

}