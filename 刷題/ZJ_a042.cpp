#include <iostream>
using namespace std;

int main() {
    long long ans[32767];
    ans[0] = 2;
    for(int i = 1; i < 32767; i++){
        ans[i] = ans[i-1] + 2 * i;
    }
    int input;
    while(cin >> input){
        cout << ans[input - 1] << endl;
    }
}