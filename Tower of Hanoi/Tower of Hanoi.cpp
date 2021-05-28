#include <iostream>
#include <cmath>

using namespace std;

void towerOfHanoi(int n, char from, char to, char mid){
    if (n == 1) {
        cout << from << " " << to << "\n";
        return;
    }
    towerOfHanoi(n-1,from,mid,to);
    cout << from << " " << to << "\n";
    towerOfHanoi(n-1,mid,to,from);
}


int main(){
	int n,count=0; 
    cin >> n;
    count = (int)(pow(2, n)) - 1;
    cout << count << "\n";
	towerOfHanoi(n, '1', '3', '2');
    return 0;
}
