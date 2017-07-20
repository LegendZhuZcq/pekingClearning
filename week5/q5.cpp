#include <iostream>
using namespace std;
int main(){
    int k;
    cin >> k;
    int a[k];
    for (int i=0;i<k;i++){
        cin >> a[i];
    }
    while (k--){
        cout << a[k];
        if(k>0) cout<<" ";
    }
    cout << endl;
    return 0;
}
