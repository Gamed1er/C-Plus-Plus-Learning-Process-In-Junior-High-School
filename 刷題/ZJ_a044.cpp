#include <iostream>
using namespace std;
int n;
int main() {
    while(cin >> n) cout << ((n+1)*((n*n)-n+6))/6 << endl;
}