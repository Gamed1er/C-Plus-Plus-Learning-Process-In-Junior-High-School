#include <iostream>
#include <string>
using namespace std;
int main() {
    string n;
    while(cin >> n){
        long long ans = 0;
        for(int i = 0; i < n.size(); i++) ans += n[i] - '0';
        if(ans % 3 == 0) cout << "yes" << endl;
        else cout << "no" << endl;
    }
}