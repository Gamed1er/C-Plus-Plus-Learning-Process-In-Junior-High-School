#include <iostream>
using namespace std;
int main() {
    int n,l = 0, r = 0, t = 0; cin >> n;
    int a[n + 1][2];
    for(int i = 1; i <= n; i++) cin >> a[i][0] >> a[i][1];
    a[0][0] = 0; a[0][1] = 0;
    for(int i = 0; i < n - 1; i++){
        int x1 = a[i+1][0] - a[i][0] , y1 = a[i+1][1] - a[i][1];
        int x2 = a[i+2][0] - a[i+1][0] , y2 = a[i+2][1] - a[i+1][1];
        int o = x1 * y2 - x2 * y1;
        if(o == 0 && x1 * x2 + y1 * y2 < 0) t++;
        if(o > 0) l++;
        if(o < 0) r++;
    }
    cout << l << " " << r << " " << t << endl;
}