#include <iostream>
using namespace std;
int main() {
  int h,r;
  cin>>h>>r;
  double volume = h*r*r*3.14159;
  double reminder = (20000-(20000/volume))*volume;
  int require = int(20000/volume);
  if( reminder >0){
    require++;
  };
  cout<<require<<endl;
}
