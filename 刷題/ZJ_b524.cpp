#include <iostream>
#include <cstring>
using namespace std;

int main() {
    string s;
    while(cin >> s){
        int yl = 0, ans = 0;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == 'y'){
                ans += abs(yl - i);
                yl += 3;
            }
        }
        cout << ans << endl;
    }
}