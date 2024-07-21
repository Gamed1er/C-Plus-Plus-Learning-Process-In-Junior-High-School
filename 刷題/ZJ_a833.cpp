#include <iostream>
#include <algorithm>
using namespace std;

struct node{
  int a; int b;
};

bool cmp(node x, node y){
  return x.a < y.b;
}

int main() {
  node a[3];
  for(int i = 0; i < 3; i++){
    cin >> a[i].a >> a[i].b;
  }
  sort(a, a+3, cmp);
  if(a[0].b <= a[1].a && a[1].b <= a[2].a) cout <<"Happy";
  else cout<<"QQ";
}