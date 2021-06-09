#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string str;
    cin >> str;

    vector<string> permutation;

    sort(str.begin(), str.end());

    do {
        permutation.push_back(str); 
    }while ( next_permutation(str.begin(), str.end()));

    cout << permutation.size() << endl;

    for ( int i = 0; i < permutation.size(); i++) {
        cout << permutation[i] << endl;
    }
}