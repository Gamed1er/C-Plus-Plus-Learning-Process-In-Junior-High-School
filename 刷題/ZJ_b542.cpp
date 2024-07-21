#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n, q; cin >> n >> q;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    sort(arr, arr+n);
    int temp, L, R;
    for(int i = 0; i < q; i++){
        cin >> temp;
        L = 0; R = 1;
        while(L < n && R < n){
            if(arr[R] - arr[L] == temp) break;
            if(arr[R] - arr[L] > temp) L++;
            else R++;
        }
        if(arr[R] - arr[L] == temp) cout << "YES\n";
        else cout << "NO\n";
    }
}