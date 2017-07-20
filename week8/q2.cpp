#include<iostream>
#include<string>

using namespace std;
int main(){
  int n;
  double trips[100];
  const double bikeSpeed=3.0;
  const double walkSpeed=1.2;
  const double bikeProcess = 23+27;

  cin>>n;
  for (int i=0; i<n;i++){
    cin>>trips[i];
    double bikeTime = bikeProcess+(trips[i]/bikeSpeed);
    double walkTime = trips[i]/walkSpeed;
    if(bikeTime>walkTime)
      cout<<"Walk"<<endl;
    else if (bikeTime<walkTime)
      cout<<"Bike"<<endl;
    else
      cout<<"All"<<endl;
  }
  return 0;
}
