#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main() {
    int c = 0; cin >> c;
    string n; cin >> n;
    int arr[n.length()]; bool temp = isupper(n[0]);
    for (int i = 0, l = 1; i < n.length(); i++){
        bool t = isupper(n[i]);
        if (t == temp){
            arr[i] = l;
            l++;
        }
        else{
            arr[i] = 1;
            l = 2;
            temp = t;
        }
    }
    int ans = 0, con = 0; bool combo = false;
    for(int i = 0; i < n.length(); i += 0){
        //cout << i << endl;
        if(combo){
            if(arr[i] == c){
                i += c;
                con ++;
            }
            else{
                combo = false;
                ans = max(ans, con);
                con = 0;
                i -= 1;
                while(arr[i] != 1) i--;
            }
        }
        else{
            if(arr[i] == c){
                combo = true;
                con++; i++;
                while(arr[i] != 1){
                    i++;
                    if(i >= n.length()) break;
                }
                i += c - 1;
            }
            else{
                i++;
            }
        }
        
    }
    ans = max(ans, con);
    cout << ans * c;
}