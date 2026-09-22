// Ejercicio 60 - Subsecuencia creciente mas larga contigua
#include <iostream>
using namespace std;

int main() {
    int v[100];
    int n;

    cout << "Ingrese N: ";
    cin >> n;

    cout << "Ingrese los elementos: ";
    for (int i = 0; i < n; i++) cin >> v[i];

    int mejorIni = 0, mejorLar = 1;
    int ini = 0, largo = 1;

    for (int i = 1; i < n; i++) {
        if (v[i] > v[i - 1]) {
            largo++;
        } else {
            ini = i;
            largo = 1;
        }

        if (largo > mejorLar) {
            mejorLar = largo;
            mejorIni = ini;
        }
    }

    cout << "Longitud = " << mejorLar << "; Tramo: ";
    for (int i = mejorIni; i < mejorIni + mejorLar; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
