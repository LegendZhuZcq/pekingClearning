#include<iostream>
using namespace std;

int main() {
  int n,k;
  cin >> n>>k;
  int a[100];
  for (int i=0;i<n;i++){
    cin>>a[i];
  }
  for(int i=0;i<n;i++)
   {
       int num=0;//
       for(int j=0;j<n;j++)
       {
           if(a[i]<a[j])
               num++;
       }
	   if (num == (k - 1)) {
		   cout << a[i] << endl;
		   return 0;
	   }
   }
  return 0;
}
