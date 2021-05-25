#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int counter(string String, int n){
    int count=1;
    vector<int> max;
 
    if(n==1){
        return count;
    }
 
    for(int i=0;i<n-1;i++){
        if(String[i] == String[i+1]){
            count++;
        }else{
            max.push_back(count);
            count=1;
        }
    }
    max.push_back(count);
    return *max_element(max.begin(), max.end());
}
 
int main() {
    string s;
 
    cin >> s;
    cout << counter(s,(int)s.length());
 
 
    return 0;
}