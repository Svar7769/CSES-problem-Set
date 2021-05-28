#include <iostream>
#include <vector>
#include <string>

using namespace std;

void grayCode(int n){
    vector<string> arr ;

    arr.push_back("0");
    arr.push_back("1");

    // left shift number in bit << no of position to shift
    // loop starting 10 to ending at 1 follow by n zeros 

    for(int i=2 ; i < (1<<n) ; i = (i<<1)){
        // to create correct no of cases
        for(int j=i-1 ; j >=0; j--){
            arr.push_back(arr[j]);
        }
        // Add zeros at the start of first i element
        for(int j=0; j<i; j++) {
            arr[j] = "0" + arr[j];
        }
        // Add ones at start of remaining element
        for(int j=i; j<2*i; j++) {
            arr[j] = "1" + arr[j];
        }
    }

    for (int i=0 ; i< arr.size(); i++){
        cout << arr[i] << "\n";
    } 
}

int main() {
    int n;
    cin >> n;

    grayCode(n);

    return 0;
}