#include <iostream>
#include <cstring>
using namespace std;
int main() {
    int n; cin >> n;
    string s;
    for(int cases = 0; cases < n; cases ++){
        cin >> s; int ans = 1;
        for(int i = 0; i < s.length(); i ++){
            ans *= s[i] - '0'; 
        }
        cout << ans << endl;
    }
}