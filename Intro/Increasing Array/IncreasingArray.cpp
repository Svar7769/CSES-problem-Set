#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
long long counter(int arr[], int n){
    long long count=0;
 
    for(int i=1;i<n;i++){
        if(arr[i] < arr[i-1]){
            count+=arr[i-1]-arr[i];
            arr[i]=arr[i-1];
        }
    }
    return count;
}
 
int main() {
    int n;
    cin >> n;
    int arr[n];
 
    for(int i=0; i<n ; i++) {
       cin >> arr[i];
    }
 
    cout << counter(arr,n);
 
 
    return 0;
}