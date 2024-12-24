#include <iostream>
#include <sstream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); // Optimización para entrada/salida
    cin.tie(0); // Desvincula cin de cout para mejorar la velocidad
    int n;
    cin >> n; // Primer input, cantidad de palabras

    for (int i = 0; i<n; i++){
        string s;
        cin >> s;
        if (s.length() > 10){
            double w_between = s.length() - 2;
            stringstream ss;
            ss << s[0] << w_between << s[s.length()-1];
            cout << ss.str() << "\n";
        }
        else{
            cout << s << "\n";
        }
    }
}
