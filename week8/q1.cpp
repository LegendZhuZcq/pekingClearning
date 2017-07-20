#include<iostream>
using namespace std;
int main(){
  int a;
  int number[5];
  int result=0;
  cin>> a;
  for(int i=0; i<5;i++) {
    cin>>number[i];
    if (number[i]<a) result += number[i];
  }
  cout<<result<<endl;
  return 0;
}
