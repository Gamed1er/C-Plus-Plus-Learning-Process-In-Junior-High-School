#include <iostream>
#include <algorithm>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b){return a.first > b.first;}

int main() {
    int n, p, ans = 0, t = 0; cin >> n;
    pair<int, int> arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i].first >> arr[i].second; cin >> p;
    sort(arr, arr + n, cmp);
    while(p > 0 && t < n){
        p -= arr[t].second;
        ans++; t++;
    }
    cout << ans;
}