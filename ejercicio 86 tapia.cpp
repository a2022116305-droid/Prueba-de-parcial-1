// Ejercicio 86 - Contar X con dos busquedas binarias
#include <iostream>
using namespace std;

int primera(int v[], int n, int x) {
    int ini = 0, fin = n - 1, pos = -1;
    while (ini <= fin) {
        int medio = (ini + fin) / 2;
        if (v[medio] == x) {
            pos = medio;
            fin = medio - 1;
        } else if (v[medio] < x) {
            ini = medio + 1;
        } else {
            fin = medio - 1;
        }
    }
    return pos;
}

int ultima(int v[], int n, int x) {
    int ini = 0, fin = n - 1, pos = -1;
    while (ini <= fin) {
        int medio = (ini + fin) / 2;
        if (v[medio] == x) {
            pos = medio;
            ini = medio + 1;
        } else if (v[medio] < x) {
            ini = medio + 1;
        } else {
            fin = medio - 1;
        }
    }
    return pos;
}

int main() {
    int v[100];
    int n, x;

    cout << "Ingrese N: ";
    cin >> n;

    cout << "Ingrese los elementos ordenados: ";
    for (int i = 0; i < n; i++) cin >> v[i];

    cout << "Valor a contar: ";
    cin >> x;

    int p = primera(v, n, x);
    int u = ultima(v, n, x);

    int cant;
    if (p == -1) {
        cant = 0;
    } else {
        cant = u - p + 1;
    }

    cout << "Cantidad = " << cant << endl;

    return 0;
}
