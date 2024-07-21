#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, int> arr;
    string input;
    while(getline(cin, input)){
        if(arr.find(input) == arr.end()){
            cout << "NO\n";
            arr[input] = 0;
        }
        else{
            cout << "YES\n";
        }
    }
}