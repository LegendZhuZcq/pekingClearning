#include <iostream>
using namespace std;
int main() {
  int n=6;
  int largestOdd=1;
  int smallestEven = 100;
  for (int i=0; i<6;i++){
    int input;
    cin>>input;
    if (input%2){
      if(input>largestOdd){largestOdd=input;}
    } else {
      if(input<smallestEven){smallestEven=input;}
    }
  }
  cout<<abs(smallestEven-largestOdd)<<endl;

  return 0;
}
