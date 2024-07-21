#include <iostream>
using namespace std;
int main() {
    float a, b;
    while(cin >> a){
        b = 0;
        for(int i = 0; i < a; i++){
            int c; cin >> c;
            b += c;
        }
        if(b / a > 59) cout << "no\n";
        else cout << "yes\n";
    }
}