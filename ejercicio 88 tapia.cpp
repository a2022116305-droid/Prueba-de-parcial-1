// Ejercicio 88 - Producto excepto en la posicion
#include <iostream>
using namespace std;

int main() {
    long long v[100], r[100];
    int n;

    cout << "Ingrese N: ";
    cin >> n;

    cout << "Ingrese los elementos: ";
    for (int i = 0; i < n; i++) cin >> v[i];

    // primero acumulo lo que hay a la izquierda de cada posicion
    long long acum = 1;
    for (int i = 0; i < n; i++) {
        r[i] = acum;
        acum = acum * v[i];
    }

    // ahora multiplico por lo que hay a la derecha
    acum = 1;
    for (int i = n - 1; i >= 0; i--) {
        r[i] = r[i] * acum;
        acum = acum * v[i];
    }

    for (int i = 0; i < n; i++) cout << r[i] << " ";
    cout << endl;

    return 0;
}
