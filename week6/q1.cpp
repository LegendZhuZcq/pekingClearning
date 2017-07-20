#include <iostream>
using namespace std;
int main() {
  int n;
  cin>>n;//number of container
  struct bacteria {
    int id;
    double growthRate;
  };
  bacteria bacteria[n];//create a array to store the growth rate

  //get the data input
  for (int i=0;i<n;i++){
    int idNumber;double start; double end;
    cin>>idNumber>>start>>end;
    bacteria[i].id=idNumber;
    bacteria[i].growthRate=end/start;
  }

  //sort the array from low to high
  for (int i=0;i<n;i++){
    for (int y=0; y<n-1;y++){
      if(bacteria[y].growthRate>bacteria[y+1].growthRate){
        double temp = bacteria[y+1].growthRate;
        int tempid = bacteria[y+1].id;
        bacteria[y+1].growthRate=bacteria[y].growthRate;
        bacteria[y+1].id=bacteria[y].id;
        bacteria[y].growthRate=temp;
        bacteria[y].id=tempid;
      }
    }
  }

  //identify the number of type, calculate the difference of the sorted array
  //if the largest difference is where the number seperate type A and type B
  int numberOfTypeB;
  double largestDifference=0;
  for (int i=0;i<n-1;i++){
    if((bacteria[i+1].growthRate-bacteria[i].growthRate)> largestDifference){
      largestDifference =(bacteria[i+1].growthRate-bacteria[i].growthRate);
      numberOfTypeB=i+1;
    }
  }


  cout<<n-numberOfTypeB<<endl;//print the number of type A
  //print Type A, starting type out the array from the numberOfTypeB
  for (int i=numberOfTypeB;i<n;i++){
    cout<<bacteria[i].id<<endl;
  }

  cout<<numberOfTypeB<<endl;//print the number of type B
  //print Type B, starting type out the array from 0 to the numberOfTypeB-1
  for (int i=0;i<numberOfTypeB;i++){
    cout<<bacteria[i].id<<endl;
  }

  return 0;
}
