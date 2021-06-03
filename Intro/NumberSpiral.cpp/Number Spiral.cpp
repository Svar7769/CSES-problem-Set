#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
 
int main() {
    long long t,y,x;  //row, column
    cin >> t;
 
    while(t!=0) {
        cin >> y >> x;
        long long z = max(x, y);
        long long d = z * (z - 1) + 1;
 
        if (z % 2 == 0) {
            cout << (d + y - x)<<"\n";
        } else {
        cout << (d + x - y)<<"\n";
    }
        t--;
    }
    return 0;
}