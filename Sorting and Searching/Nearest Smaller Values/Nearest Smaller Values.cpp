// monotonic stack
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    stack<pair<int,int>> stk;
    vector<int> v(n);

    // eb=ntering the no
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
    // looping over entire array
    for (int i = 0; i < n; i++){
        // removing element that are not needed
        while (stk.size() > 0 && stk.top().first >= v[i]){
            stk.pop();
        }
        // if the top exist  then print it out
        if (stk.size() > 0)
            cout << stk.top().second << " ";
        // if the stk is empty then print 0
        // means the no is at present the smallest
        else 
            cout << 0 << " ";
        // add current no to the stack
        stk.push({v[i], i + 1});
    }
}