#include <iostream>
#include <cstring>
using namespace std;

int main() {
    string input;
    while(cin >> input){
        int i = input.length() - 1;
        if(input[i] == '0') while(input[i] == '0'){
            input[i] = '9'; i--;
            if(input[i] != '0'){
                input[i] = input[i] - 1;
                break;
            }
        }
        else{
            input[i] = char(input[i] - 1);
        }
        i = 0;
        if(input[i] != '0') cout << input[i];
        for(i = 1; i < input.length(); i++) cout << input[i];
        cout << endl;
    }
}