#include <iostream>
using namespace std;
int num;

int main(){
    while(cin >> num) cout << ((num % 9 == 0) && (num > 0) ? 9 :(num % 9)) << endl;
}