#include <iostream>
using namespace std;

int main() {
    int v[100];
    int n;
    int x;
    int inicio;
    int fin;
    int medio;
    int primera = -1;
    int ultima = -1;
    int cantidad;

    cout << "Ingrese N: ";
    cin >> n;

    cout << "Ingrese los elementos ordenados: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    cout << "Valor a contar: ";
    cin >> x;

    inicio = 0;
    fin = n - 1;

    while (inicio <= fin) {
        medio = (inicio + fin) / 2;

        if (v[medio] == x) {
            primera = medio;
            fin = medio - 1;
        } else if (v[medio] < x) {
            inicio = medio + 1;
        } else {
            fin = medio - 1;
        }
    }

    inicio = 0;
    fin = n - 1;

    while (inicio <= fin) {
        medio = (inicio + fin) / 2;

        if (v[medio] == x) {
            ultima = medio;
            inicio = medio + 1;
        } else if (v[medio] < x) {
            inicio = medio + 1;
        } else {
            fin = medio - 1;
        }
    }

    if (primera == -1) {
        cantidad = 0;
    } else {
        cantidad = ultima - primera + 1;
    }

    cout << "Cantidad = " << cantidad << endl;

    return 0;
}
