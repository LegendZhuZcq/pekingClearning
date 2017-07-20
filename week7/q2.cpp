#include<iostream>

using namespace std;

int main() {
  int n;
  int m;
  cin>> n;
  if(n>94 && n<101){
    m=1;
  }else if(n>89 && n<95){
    m=2;
  }else if(n>84 && n<90){
    m=3;
  }else if(n>79&& n<85){
    m=4;
  }else if(n>69 && n<80){
    m=5;
  }else if(n>59 && n<70){
    m=6;
  }else {
    m=7;
  }
  cout<<m<<endl;
  return 0;
}
