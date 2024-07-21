#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int n; 
    while(cin >> n){
        int c[n], v[n];
        for(int i = 0; i < n; i++) cin >> c[i] >> v[i];
        int dp[101];
        memset(dp, 0, sizeof(dp));

        for(int i = 0; i < n; i++){
            for(int j = 100; j >= c[i]; j--){
                dp[j] = max(dp[j], dp[j - c[i]] + v[i]);
            }
        }
        cout << dp[100] << "\n";
    }
}
