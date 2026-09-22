// Ejercicio 8 - Contar numeros negativos
#include <iostream>
using namespace std;

int main() {
    int v[8];
    int cont = 0;

    cout << "Ingrese 8 numeros enteros: ";
    for (int i = 0; i < 8; i++) {
        cin >> v[i];
    }

    for (int i = 0; i < 8; i++) {
        if (v[i] < 0) {
            cont++;
        }
    }

    cout << "Negativos = " << cont << endl;

    return 0;
}
