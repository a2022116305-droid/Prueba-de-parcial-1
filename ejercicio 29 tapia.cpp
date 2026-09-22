// Ejercicio 29 - Segundo mayor distinto
#include <iostream>
using namespace std;

int main() {
    int v[100];
    int n;

    cout << "Ingrese N: ";
    cin >> n;

    cout << "Ingrese los elementos: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int may = v[0];
    for (int i = 1; i < n; i++) {
        if (v[i] > may) may = v[i];
    }

    // busco el mayor de los que son distintos al maximo
    bool hay = false;
    int seg = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] != may) {
            if (!hay || v[i] > seg) {
                seg = v[i];
                hay = true;
            }
        }
    }

    if (hay) {
        cout << "Segundo mayor = " << seg << endl;
    } else {
        cout << "No existe un segundo mayor distinto" << endl;
    }

    return 0;
}
