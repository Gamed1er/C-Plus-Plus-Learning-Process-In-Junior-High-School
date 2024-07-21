#include <iostream>
using namespace std;

int main() {
    long long int a, b, c;
    long long int arr[10000];
    while(cin >> a >> b >> c){
        arr[0] = a;
        arr[1] = b;
        for(int i = 2; i < c + 3; i++){
            int j = i % 10000;
            if(j < c && j > 5){
                arr[j] = (3 * arr[j - 2] - arr[j - 4]) % 1000000007;
                i += 1;
            }
            else{
                if(j > 1) arr[j] = (arr[j - 1] + arr[j - 2]) % 100000007;
                else if(j == 1) arr[1] = (arr[0] + arr[9999]) % 100000007;
                else arr[0] = (arr[0] + arr[9999]) % 100000007;
            }
        }
        cout << arr[(c + 2) % 10000] << endl;
    }
}