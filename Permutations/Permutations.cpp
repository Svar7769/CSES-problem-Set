#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
void counter(long n){
    if (n==1){
        cout<<"1"<< "\n";
    }else if (n==2 || n==3){
        cout<< "NO SOLUTION" << "\n";
    }else {
        for (long i = 2; i <= n; i = i + 2) {
            cout << i << " ";
        }
        for (long j = 1; j <= n; j = j + 2) {
            cout << j << " ";
        }
    }
}
 
int main() {
 
    long n;
    cin>> n;
    counter(n);
    return 0;
}