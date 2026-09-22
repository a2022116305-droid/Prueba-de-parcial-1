#include <iostream>
using namespace std;

int main() {
    int v[8];
    int x;
    int encontrado = 0;

    cout << "Ingrese 8 numeros enteros: ";
    for (int i = 0; i < 8; i++) {
        cin >> v[i];
    }

    cout << "Ingrese el valor a buscar: ";
    cin >> x;

    for (int i = 0; i < 8; i++) {
        if (v[i] == x) {
            encontrado = 1;
        }
    }

    if (encontrado == 1) {
        cout << "Encontrado" << endl;
    } else {
        cout << "No encontrado" << endl;
    }

    return 0;
}
