#include <iostream>
#include <cstring>
using namespace std;
int main() {
    string n;
    cin >> n;
    int i = n.length() - 1;
    while(n[i] == '0'){
        i--;
        if(i == -1){
            cout << 0;
            break;
        }
    }
    for(i = i + 0; i >= 0; i--)    cout << n[i];
}