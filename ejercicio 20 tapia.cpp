// Ejercicio 20 - Copiar un vector
#include <iostream>
using namespace std;

int main() {
    int v[6];
    int copia[6];

    cout << "Ingrese 6 numeros enteros: ";
    for (int i = 0; i < 6; i++) {
        cin >> v[i];
    }

    for (int i = 0; i < 6; i++) {
        copia[i] = v[i];
    }

    cout << "Copia: ";
    for (int i = 0; i < 6; i++) {
        cout << copia[i] << " ";
    }
    cout << endl;

    return 0;
}
