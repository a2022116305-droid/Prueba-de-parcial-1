#include <iostream>
using namespace std;

int main() {
    int v[10];
    int x;
    int posicion = -1;

    cout << "Ingrese 10 numeros enteros: ";
    for (int i = 0; i < 10; i++) {
        cin >> v[i];
    }

    cout << "Ingrese el valor a buscar: ";
    cin >> x;

    for (int i = 0; i < 10; i++) {
        if (v[i] == x) {
            if (posicion == -1) {
                posicion = i;
            }
        }
    }

    cout << "Primera posicion = " << posicion << endl;

    return 0;
}
