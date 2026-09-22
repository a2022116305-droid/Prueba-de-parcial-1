// Ejercicio 9 - Contar pares
#include <iostream>
using namespace std;

int main() {
    int v[10];
    int pares = 0;

    cout << "Ingrese 10 numeros enteros: ";
    for (int i = 0; i < 10; i++) {
        cin >> v[i];
    }

    for (int i = 0; i < 10; i++) {
        if (v[i] % 2 == 0) {
            pares++;
        }
    }

    cout << "Pares = " << pares << endl;

    return 0;
}
