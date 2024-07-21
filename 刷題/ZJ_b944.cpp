#include <iostream>
#include <cstring>
using namespace std;
int main() {
    int n, a, b; cin >> n;
    int toilets[n][2];
    memset(toilets,0,sizeof(toilets));
    while(cin >> a >> b){
        //清空廁所
        for(int i = 0; i < n; i++){
            if(toilets[i][1] > 0) toilets[i][1] -= 1;
            if(toilets[i][1] == 0) toilets[i][0] = 0;
        }
        bool find = false;
        //兩面空
        for(int i = 0; i < n; i++){
            bool temp = false;
            if(i > 0) if(toilets[i-1][0] > 0) temp = true;
            if(i < n-1) if(toilets[i+1][0] > 0) temp = true;
            if(toilets[i][0] > 0) temp = true;
            if(temp == false){
                toilets[i][0] = a;
                toilets[i][1] = b;
                find = true;
                break;
            }
        }
        //空
        if(!find) for(int i = 0; i < n; i++){
            bool temp = false;
            if(toilets[i][0] > 0) temp = true;
            if(temp == false){
                toilets[i][0] = a;
                toilets[i][1] = b;
                find = true;
                break;
            }
        }
        //滿
        if(!find) cout << "  Not enough\n";
        cout << "Number: "; for(int i = 0; i < n; i++) cout << toilets[i][0] << " "; cout << "\n";
        cout << "  Time: "; for(int i = 0; i < n; i++) cout << toilets[i][1] << " "; cout << "\n";
        cout << "\n";
    }
}