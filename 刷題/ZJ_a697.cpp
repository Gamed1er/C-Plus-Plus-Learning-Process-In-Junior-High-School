#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int n, m; cin >> n >> m;
    int a[n], dp[m + 1][n]; 
    for(int i = 0; i < n; i++) cin >> a[i];
    memset(dp, 0, sizeof(dp));

    //DP
    for(int x = 0; x <= a[0]; x++) dp[x][0] = 1;
    for(int y = 1; y < n; y++){
        for(int x = 0; x <= m; x++){
            int temp = 0;
            for(int i = max(0, x - a[y]); i <= x; i++){
                temp += dp[i][y-1];
            }
            dp[x][y] = temp % 1000007;
        }
    }
    cout << dp[m][n - 1];
}