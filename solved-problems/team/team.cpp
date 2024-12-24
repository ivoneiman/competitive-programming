#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    int problems = 0; // Contador de problemas que cumplirán la condición

    while (n--) {
        int f1, f2, f3;
        cin >> f1 >> f2 >> f3; // Leer las opiniones de Petya, Vasya y Tonya

        // Si al menos dos amigos están seguros, contar el problema
        if (f1 + f2 + f3 >= 2) {
            problems++;
        }
    }

    cout << problems << "\n";
    return 0;
}
