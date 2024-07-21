#include <iostream>
using namespace std;

int main() {
    int n;
    while(cin >> n){
        int minheap[n+1], maxheap[n+1];
        for(int i = 1; i < n+1; i++){
            cin >> minheap[i];
            maxheap[i] = minheap[i];
        }
        //minheap
        for(int i = 1; i < n+1; i++){
            int temp = i, t;
            if(temp != 1){
                while(temp != 1){
                    if(minheap[temp] < minheap[temp/2]){
                        t = minheap[temp];
                        minheap[temp] = minheap[temp/2];
                        minheap[temp/2] = t;
                        temp = temp/2;
                    }
                    else break;
                }
            }
        }
        //maxheap
        for(int i = 1; i < n+1; i++){
            int temp = i, t;
            if(temp != 1){
                while(temp != 1){
                    if(maxheap[temp] > maxheap[temp/2]){
                        t = maxheap[temp];
                        maxheap[temp] = maxheap[temp/2];
                        maxheap[temp/2] = t;
                        temp = temp/2;
                    }
                    else break;
                }
            }
        }
        for(int i = 1; i < n+1; i++) cout << minheap[i] << " "; cout << "\n";
        for(int i = 1; i < n+1; i++) cout << maxheap[i] << " "; cout << "\n";
    }
}