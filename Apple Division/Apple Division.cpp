#include <iostream>
#include <algorithm>


using namespace std;

long long sum=0;

long long solution (long long arr[], long long currentSum, int n) {
    
    // Base case
    if (n==0) {
        return abs((sum - currentSum) - currentSum);
    } 


    // recursvive calls

    // First case without Including the nth element \
    // Second case With nth element
    return min(solution(arr, currentSum, n-1), 
               solution(arr, currentSum + arr[n], n-1));
}


int main() {
    int n;
    cin >> n;
    long long arr[n];

    for (int i=0; i<n; i++) {
        cin>> arr[i];
        sum += arr[i];
    }


    cout << solution(arr, 0, n) << endl;

    return 0;
}

