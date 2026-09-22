// Ejercicio 45 - Busqueda binaria
#include <iostream>
using namespace std;

int main() {
    int v[100];
    int n, x;

    cout << "Ingrese N: ";
    cin >> n;

    cout << "Ingrese los elementos ordenados: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    cout << "Valor a buscar: ";
    cin >> x;

    int ini = 0;
    int fin = n - 1;
    int pos = -1;

    while (ini <= fin) {
        int medio = (ini + fin) / 2;
        if (v[medio] == x) {
            pos = medio;
            break;
        } else if (v[medio] < x) {
            ini = medio + 1;
        } else {
            fin = medio - 1;
        }
    }

    cout << "Posicion = " << pos << endl;

    return 0;
}
