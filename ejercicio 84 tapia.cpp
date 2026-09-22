// Ejercicio 84 - Busqueda binaria: primera aparicion
#include <iostream>
using namespace std;

int main() {
    int v[100];
    int n, x;

    cout << "Ingrese N: ";
    cin >> n;

    cout << "Ingrese los elementos ordenados: ";
    for (int i = 0; i < n; i++) cin >> v[i];

    cout << "Valor a buscar: ";
    cin >> x;

    int ini = 0, fin = n - 1, pos = -1;

    while (ini <= fin) {
        int medio = (ini + fin) / 2;
        if (v[medio] == x) {
            pos = medio;
            fin = medio - 1;   // sigo buscando mas a la izquierda
        } else if (v[medio] < x) {
            ini = medio + 1;
        } else {
            fin = medio - 1;
        }
    }

    cout << "Primera posicion = " << pos << endl;

    return 0;
}
