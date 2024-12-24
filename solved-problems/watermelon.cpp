#include <iostream>

using namespace std;

int v[2];

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin.precision(10);

    int w;
    cin >> w;

    if (w>= 4 && (w % 2 == 0)){
        cout << "YES\n";
    }
    else cout << "NO\n";
}
