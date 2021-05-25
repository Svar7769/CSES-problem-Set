#include <iostream>
#include <vector>
#include <algorithm>
 
 
using namespace std;
 
 
int main() {
    long long no, count=0;
    // taking input
    cin >> no;
 
    for(long long n=1;n<=no;n++){
        count  = (n*n*(n*n-1)/2)-(4*(n-1)*(n-2));
        cout << count << "\n";
        count=0;
    }
}
