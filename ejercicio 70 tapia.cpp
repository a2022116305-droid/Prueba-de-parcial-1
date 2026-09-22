// Ejercicio 70 - Subarreglo con suma minima
#include <iostream>
using namespace std;

int main() {
    int v[100];
    int n;

    cout << "Ingrese N: ";
    cin >> n;

    cout << "Ingrese los elementos: ";
    for (int i = 0; i < n; i++) cin >> v[i];

    int mejor = v[0];
    int actual = v[0];
    int ini = 0, mejorIni = 0, mejorFin = 0;

    for (int i = 1; i < n; i++) {
        if (actual + v[i] > v[i]) {
            actual = v[i];
            ini = i;
        } else {
            actual = actual + v[i];
        }

        if (actual < mejor) {
            mejor = actual;
            mejorIni = ini;
            mejorFin = i;
        }
    }

    cout << "Suma minima = " << mejor;
    cout << "; Indices = " << mejorIni << ".." << mejorFin << endl;

    return 0;
}
