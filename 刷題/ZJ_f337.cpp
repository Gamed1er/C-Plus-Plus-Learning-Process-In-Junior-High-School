#include <iostream>
using namespace std;

int main(){
    int n, m; cin >> n >> m;
    if(m * 8 > n * 3) cout << "Too much";
    else if(m * 8 >= n * 2) cout << "Yes";
    else cout <<"Not enough";
}