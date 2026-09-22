#include <iostream>
using namespace std;

int main() {
    int v[100];
    int n;
    int cantidad;
    int esPermutacion = 1;

    cout << "Ingrese N: ";
    cin >> n;

    cout << "Ingrese los elementos: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for (int valor = 1; valor <= n; valor++) {
        cantidad = 0;

        for (int i = 0; i < n; i++) {
            if (v[i] == valor) {
                cantidad = cantidad + 1;
            }
        }

        if (cantidad != 1) {
            esPermutacion = 0;
        }
    }

    if (esPermutacion == 1) {
        cout << "Es permutacion: SI" << endl;
    } else {
        cout << "Es permutacion: NO" << endl;
    }

    return 0;
}
