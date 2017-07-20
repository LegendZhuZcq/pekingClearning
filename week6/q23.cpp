#include <iostream>
using namespace std;
int main() {
  int k;
  cin>>k;
  int numbers[100];
  for (int i=0;i<k;i++){
    cin>>numbers[i];
  }
  int highestScore=0;
  for (int i=0;i<k;i++){
    if(numbers[i]>highestScore){highestScore=numbers[i];}
  }
  cout<<highestScore<<endl;
  return 0;
}
