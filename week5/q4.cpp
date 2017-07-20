#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for (int i=0;i<n;i++){
        int k, ans=0;
        cin >> k;
        while (k>0){
            ans += k%2;
            k/=2;
        }
        cout << ans << endl;
    }
}
