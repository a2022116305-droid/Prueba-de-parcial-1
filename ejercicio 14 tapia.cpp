// Ejercicio 14 - Sumar posiciones pares
#include <iostream>
using namespace std;

int main() {
    int v[8];
    int suma = 0;

    cout << "Ingrese 8 numeros enteros: ";
    for (int i = 0; i < 8; i++) {
        cin >> v[i];
    }

    // avanzo de 2 en 2 arrancando en la posicion 0
    for (int i = 0; i < 8; i = i + 2) {
        suma += v[i];
    }

    cout << "Suma indices pares = " << suma << endl;

    return 0;
}
