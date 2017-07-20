#include <iostream>
using namespace std;
int main() {
  int input;
  cin>>input;
  cout<<input/100<<endl;
  input=input%100;
  cout<<input/10<<endl;
  input=input%10;
  cout<<input<<endl;
  return 0;
}
