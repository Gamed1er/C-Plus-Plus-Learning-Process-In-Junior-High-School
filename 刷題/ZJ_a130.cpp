#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int Case; cin >> Case;
    for(int c = 0; c < Case; c++){
        pair<string, int> channel[10];
        int biggest = 0;
        for(int i = 0; i < 10; i++){
            cin >> channel[i].first >> channel[i].second;
            if(channel[i].second > biggest) biggest = channel[i].second;
        }
        cout << "Case #" << c+1 << ": \n";
        for(int i = 0; i < 10; i++){
            if(channel[i].second == biggest) cout << channel[i].first << "\n"; 
        }
    }
}