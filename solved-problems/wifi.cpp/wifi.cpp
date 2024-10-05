#include <iostream>
#include <utility>

/*
    Corregir puntos y comas, porque tira error de compilación
*/


using namespace std;

int map[1024][1024];

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin.precision(10);

    int n,op,f1,c1,f2,c2,i,disp;

    cin >> n; // entrada del área

    do {
        cin >> op; // leemos el operando

        if (op == 1) { // entrada = 1 -> insercion
            cin >> f1 >> c1 >> disp;
            for (i = c1; i < n; i++){
                map[f1][i] += disp;
            }
        }
        else if (op == 2) {// entrada = 2 -> pregunta
            cin >> f1 >> c1 >> f2 >> c2;
            if (f1 > f2) swap(f1, f2);
            if (c1 > c2) swap(c1, c2);

            disp = 0;
            if (c1 == 0){
                for (i = f1; i<=f2; i++){
                    disp += map[i][c2];
                }
            }
            else{
                for (i = f1; i <= f2; i++){
                    disp += map[i][c2] - map[i][c1-1];
                }
            }

            cout << disp << '\n';
        }
    } while(op != 3);


}
