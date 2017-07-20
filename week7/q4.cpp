#include<iostream>
using namespace std;

int main() {
  int n;
  int note[5]={100,50, 20,10,5};
  cin >>n;
  int i=0;
  for (int i=0;i<5;i++){
    cout<< (n/note[i])<<endl;
    n=n%note[i];
  }
  cout<<n<<endl;
return 0;
}
