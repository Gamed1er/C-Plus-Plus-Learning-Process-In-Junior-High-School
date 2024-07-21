#include <iostream>
using namespace std;
int main() {
    long long cases; cin >> cases;
    for(long long c = 0; c < cases; c++){
        long long k, m; cin >> k >> m;
        cout << "Case " << c+1 << " :\n";
        for(long long i = 1; i <= m; i++){
            if(i != m || k % m == 0) cout << "第" << i << "位 : 拿" << k / m << "元並說DD! BAD!\n";
            else cout << "第" << i << "位 : 拿" << k / m + k % m << "元並說DD! BAD!\n";
        }
    }
}