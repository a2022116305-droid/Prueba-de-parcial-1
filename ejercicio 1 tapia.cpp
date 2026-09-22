// Ejercicio 1 - Leer y mostrar un vector
#include <iostream>
using namespace std;

int main() {
    int v[5];

    cout << "Ingrese 5 numeros enteros: ";
    for (int i = 0; i < 5; i++) {
        cin >> v[i];
    }

    for (int i = 0; i < 5; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
