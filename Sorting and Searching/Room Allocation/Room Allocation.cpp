#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    // arrival time, departure time, cst id time 
    vector<pair <pair<int, int>, int>> cst(n);

    for(int i= 0; i<n; i++){
        cin >> cst[i].first.first >> cst[i].first.second;
        cst[i].second = i;
    }
    sort(cst.begin(), cst.end());

    vector<int> room(n,-1);
    int roomId = 1;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int,int>>> rooms;

    for (int i=0; i<n; i++){
        if (rooms.size()==0){
            room[cst[i].second] = roomId++;
            rooms.push(make_pair(cst[i].first.second, roomId-1));
        }
        else {
            if (rooms.top().first < cst[i].first.first){
                room[cst[i].second] = rooms.top().second;
                pair<int,int> x = rooms.top();
                rooms.pop();
                rooms.push(make_pair(cst[i].first.second, x.second));
            }
            else {
                room[cst[i].second] = roomId++;
                rooms.push(make_pair(cst[i].first.second, roomId-1));
            }
        }
    }
    cout << roomId-1 << "\n";
    for (int i = 0; i < n; i++)
        cout << room[i] << " ";
}