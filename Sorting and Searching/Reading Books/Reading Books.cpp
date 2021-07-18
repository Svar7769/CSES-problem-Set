// 2 cases are in the question
#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
    int n;
    cin >> n;

    ll books[n];
    for (int i = 0; i <n; i++)
        cin >> books[i];
    
    sort(books, books + n);

    ll total = 0;

    for (int i = 0; i < n-1; i++){
        total += books[i];
    }
    
    if (total <= books[n-1]){
        cout << 2*books[n-1] << endl;    
    }else 
        cout << total + books[n-1] << endl;
}