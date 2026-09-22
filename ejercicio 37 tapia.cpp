// Ejercicio 37 - Comprobar si esta ordenado ascendentemente
#include <iostream>
using namespace std;

int main() {
    int v[100];
    int n;
    bool ordenado = true;

    cout << "Ingrese N: ";
    cin >> n;

    cout << "Ingrese los elementos: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for (int i = 0; i < n - 1; i++) {
        if (v[i] > v[i + 1]) {
            ordenado = false;
            break;
        }
    }

    cout << "Ordenado ascendentemente: ";
    if (ordenado) {
        cout << "SI" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
