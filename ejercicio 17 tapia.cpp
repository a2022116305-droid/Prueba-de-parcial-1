// Ejercicio 17 - Buscar un valor
#include <iostream>
using namespace std;

int main() {
    int v[8];
    int x;
    bool esta = false;

    cout << "Ingrese 8 numeros enteros: ";
    for (int i = 0; i < 8; i++) {
        cin >> v[i];
    }

    cout << "Ingrese el valor a buscar: ";
    cin >> x;

    for (int i = 0; i < 8; i++) {
        if (v[i] == x) {
            esta = true;
        }
    }

    if (esta) {
        cout << "Encontrado" << endl;
    } else {
        cout << "No encontrado" << endl;
    }

    return 0;
}
