#include <iostream>
using namespace std;

int main() {
    int goal, n; cin >> goal >> n;
    int coin[n]; for(int i = 0; i < n; i++) cin >> coin[i];

    //DP
    int dp[goal + 1];
    for(int i = 0; i <= goal; i++) dp[i] = 99999999;
    dp[0] = 0;

    for(int i = 0; i < n; i++){
        for(int j = coin[i]; j <= goal; j++){
            dp[j] = min(dp[j], dp[j - coin[i]] + 1);
        }
    }

    cout << dp[goal];
}