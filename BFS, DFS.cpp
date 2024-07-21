#include <iostream>
#include <vector>
using namespace std;
vector<int> v;
int n = 0;
long long int even(int);
long long int odd(int lock){
    long long int ans = 0;
    for(int i = 0; i < 3; i++){
        n++; 
        if(v[n] != 0){
            ans += abs(v[lock] - v[n]);
            if(v[n] % 2 == 0) ans += even(n);
            else ans += odd(n);
        }
    }
    return ans;
}
long long int even(int lock){
    long long int ans = 0;
    for(int i = 0; i < 2; i++){
        n++; 
        if(v[n] != 0){
            ans += abs(v[lock] - v[n]);
            if(v[n] % 2 == 0) ans += even(n);
            else ans += odd(n);
        }
    }
    return ans;
}

int main() {
    // 輸入
    int i = 1, input;
    do{
        cin >> input;
        if(input != 0){
            if(input % 2 == 0) i += 2;
            else i += 3;
        }
        v.push_back(input);
    } while(v.size() != i);
    //cout << "compete\n";
    if(v[0] % 2 == 0) cout << even(0);
    else cout << odd(0);
}
