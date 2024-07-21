#include <iostream>
#include <queue>
using namespace std;
int main() {
    int schools;
    while(cin >> schools){
        int arr[schools];
        queue<int> temp;
        for(int i = 0; i < schools; i++)cin >> arr[i];
        for(int i = 1; i <= arr[0]; i++){
            if(arr[0] % i == 0) temp.push(i);
        }
        int ans = temp.front(); 
        while(temp.size() > 0){
            bool t = true;
            for(int i = 1; i < schools; i++){
                if(arr[i] < temp.front()){
                    temp.pop();
                    t = false;
                    break;
                } 
                else if(arr[i] % temp.front() != 0){
                    temp.pop();
                    t = false;
                    break;
                }
            }
            if(!t) continue;
            ans = temp.front();
            temp.pop();
        }
        cout << ans << endl;
    }
}