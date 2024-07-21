#include <iostream>
using namespace std;
int arr[99999];

int max_c(int L, int R){
    int M = (L + R) / 2;
    int ans = 0, temp = 0;
    for(int i = M; i >= L; i--){
        temp += arr[i];
        if(temp > ans) ans = temp;
    }
    temp = 0;
    for(int i = M; i < R; i++){
        temp += arr[i];
        if(temp > ans) ans = temp;
    }
    return ans;
}

int max_b(int L, int R){
    int M = (L + R) / 2;
    if(L == R) return arr[L];
    int left = max_b(L, M);
    int right = max_b(M + 1, R);
    int mid = max_c(L, R);
    return max(left, max(right, mid));
}

int main(){
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << max_b(0, n-1);
}