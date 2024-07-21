#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;

int main() {
    double a, b, j, t;
    while(cin >> j){
        a = b = 0;
        for(int i = 0; i < j; i++){
            cin >> t;
            a += t * t / 4;
        }
        cin >> j;
        for(int i = 0; i < j; i++){
            cin >> t;
            b += t * t / 4;
        }
        double ans = round(abs(a - b) * 314.159);
        printf("%.2f\n", ans / 100);
    }
}