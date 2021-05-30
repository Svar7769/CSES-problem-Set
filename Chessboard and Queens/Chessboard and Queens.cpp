#include <iostream>
#include <algorithm>

using namespace std;

#define ll long long

ll ways;
int n=8;
bool col[8], diag1[16], diag2[16], board[8][8];

void counter (int y) {

    if (y==n){
        ways += 1;
    }

    for (int x=0; x<n; x++){
        if (col[x] || diag1[x+y] || diag2[x-y+n-1] || board[x][y]) continue;

        // Adding queen
        col[x] = diag1[x+y] = diag2[x-y+n-1] = board[x][y] = true;
        counter(y+1);
        // removing Queen Before leaving
        col[x] = diag1[x+y] = diag2[x-y+n-1] = board[x][y] = false;
    }
}


int main() {

    //scan chessboard
    string input;

    for(int i=0 ; i<n; i++) {
        cin >> input;
        for (int j=0; j<n; j++){
            if (input[j] == '*') {
                board[i][j] = true;
            }
        }
    }

    // checking no of posibility

    counter(0);

    cout << ways << "\n";

    return 0;
}