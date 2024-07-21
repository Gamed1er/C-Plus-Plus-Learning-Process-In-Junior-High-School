#include <iostream>
#include <vector>
using namespace std;
int main() {
    //Find Prime
    vector<long long int> prime;
    prime.push_back(2);
    for(long long int i = 3; i < 44721; i += 2){
        bool isPrime = true;
        for(long long int j = 0; j < prime.size(); j++){
            if(i % prime[j] == 0){
                isPrime = false;
                break;
            }
        }
        if(isPrime) prime.push_back(i);
    }
    //Count
    long long int input;
    cin.tie(0); cout.tie(0);
    while(cin >> input){
        long long int i = 0, ans = 0;
        while(input > 1){
            if(prime[i] != 0) while(input % prime[i] == 0){
                ans += prime[i];
                input /= prime[i];
            }
            i++;
            if(i == prime.size()){
                ans = input;
                break;
            }
        }
        cout << ans << endl;
    }
}