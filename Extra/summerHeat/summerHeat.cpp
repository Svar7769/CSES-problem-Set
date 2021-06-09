#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;

    cin >> n;

    int xa, xb, Xa, Xb;

    for (int i = 0; i < n; i++) {
        cin >> xa >> xb >> Xa >> Xb;
        cout << ((Xa/xa) + (Xb/xb)) << "\n";
    }
}