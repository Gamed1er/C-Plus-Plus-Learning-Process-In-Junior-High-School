#include <iostream>
#include <cmath>
using namespace std;

bool find_armstrong_number(int num){
    int n = 0, n1;
    while(pow(10, n+1) < num) n++;
    int sum = 0; n1 = n;
    while(n >= 0){
        int t = num % int(pow(10, n + 1)) / int(pow(10, n));
        sum += pow(t, n1 + 1);
        n--;
    }
    if(sum == num) return true;
    else return false;
}

int main() {
    int n, m ; cin >> n >> m; bool found = false;
    for(int i = n; i <= m; i++){
        if(find_armstrong_number(i)){
            cout << i << " "; 
            found = true;
        }
    }
    if(!found) cout << "none";
}