#include <iostream>
#include <vector>
#include <algorithm>
 
 
 
using namespace std;
 
 
using namespace std;
 

int getMissingNo(int a[], int n)
{
    int i, total=1;
 
    for ( i = 2; i<= n+1; i++)
    {
        total+=i;
        total -= a[i-2];
    }
    return total;
}
 

int main() {
    int n;
    cin>>n;
 
    int arr [n-1];
    for(int i=0;i<n-1;i++){
        cin >> arr[i];
    }
 
    cout<<getMissingNo(arr,n-1);
    return 0;
}