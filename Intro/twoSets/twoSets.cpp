#include <iostream>
#include <vector>

using namespace std;

void display(vector<long long> &v) {
    for (auto i : v) {
        cout << i << " ";
    }
    cout << "\n";
}

int main() {
    long long n;
    cin >> n;
    vector<long long> arr1, arr2;
    long long sum;

    sum = n*(n+1)/2;

    long long innerSum =0;
    
    int i=n;


    if (sum % 2 != 0) {
        // if sum is odd no spliting
        cout << "NO SOLUTION" << endl;
    }else {
        cout << "YES" << endl;
        innerSum = sum/2;
        for(i=n;i>=1;i--){
            if (i <= innerSum) {
                arr1.push_back(i);
                innerSum -= i;
            }else {
                arr2.push_back(i);
            }
        }
    } 
    cout << arr1.size() << endl;
    display(arr1);
    cout << arr2.size() << endl;
    display(arr2); 
}