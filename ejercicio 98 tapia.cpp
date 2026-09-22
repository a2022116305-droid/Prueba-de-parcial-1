// Ejercicio 98 - Numero faltante en 0..N
#include <iostream>
using namespace std;

int main() {
    int v[100];
    int n;

    cout << "Ingrese N (cantidad de valores leidos): ";
    cin >> n;

    cout << "Ingrese los valores: ";
    int suma = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        suma += v[i];
    }

    // la suma completa de 0 hasta N
    int esperada = n * (n + 1) / 2;

    cout << "Faltante = " << esperada - suma << endl;

    return 0;
}
