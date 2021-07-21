//sliding window method
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,x;
    cin >> n >> x;

    vector<int> v(n);

    for (int i = 0; i < n; i++){
        cin >> v[i];
    }

    int sum = v[0];
    int i=0,j=0,cnt=0;

    while(j<n && i<n){
        if(i==n-1){
            if(sum<x){
                break;
            }
            else{
                if (sum == x){
                    sum -= v[j];
                    j++;
                    cnt++;
                }
                else{
                    sum -= v[j];
                    j++;
                }
            }
        }
        else if (sum < x){
            i++;
            sum += v[i];
        }
        else if(sum == x){
            sum -= v[j];
            j++;
            cnt++;
        }
        else{
            sum -= v[j];
            j++;
        }
    }

    cout << cnt << endl;
}