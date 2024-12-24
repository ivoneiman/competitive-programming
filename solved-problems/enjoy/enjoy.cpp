#include <iostream>
#include <utility>

using namespace std;

int v[2];

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin.precision(10);

    int n;
    cin >> n;

   if (n==2){
        int enjoy1, enjoy2;
        cin >> enjoy1;
        cin >> enjoy2;
        if (enjoy1 > enjoy2){
            cout << enjoy1;
        }
        else cout << enjoy2;
   }
   else if (n <= 1000){
        int joy, i;
        for(i=2; i<=n; i++){
            cin >> joy;
            if (joy<v[0]){
                v[1]+=v[0];
                v[0]=joy;
            }
        else v[1]+=joy;
        }
    }
    esle if (n<=40000){}
}
