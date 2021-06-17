#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    int n,t;
    cin >> n >> t;

    vector<pair<int, int>> arr, arr1;

    int input = 0;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> input;
        arr.push_back({input, i + 1});
    }

    copy(arr.begin(), arr.end(), back_inserter(arr1));

    while(t--) {
        int a,b;
        cin >> a >> b;

        arr1.clear();
        swap(arr[b - 1].first, arr[a - 1].first);

        copy(arr.begin(), arr.end(), back_inserter(arr1));
        
        sort(arr1.begin(), arr1.end());

        count = 0;

        for (int i = 0; i < n; i++)
        {
            if (arr1[i].second > arr1[i + 1].second)
                count++;
        }

        cout << count << "\n";
    }
}