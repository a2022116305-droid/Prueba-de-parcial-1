// Ejercicio 15 - Sumar posiciones impares
#include <iostream>
using namespace std;

int main() {
    int v[8];
    int suma = 0;

    cout << "Ingrese 8 numeros enteros: ";
    for (int i = 0; i < 8; i++) {
        cin >> v[i];
    }

    for (int i = 1; i < 8; i = i + 2) {
        suma += v[i];
    }

    cout << "Suma indices impares = " << suma << endl;

    return 0;
}
