#include <iostream>
using namespace std;

int main() {
    int v[100];
    int n;
    int x;
    int inicio;
    int fin;
    int medio;
    int posicion = -1;

    cout << "Ingrese N: ";
    cin >> n;

    cout << "Ingrese los elementos ordenados: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    cout << "Valor a buscar: ";
    cin >> x;

    inicio = 0;
    fin = n - 1;

    while (inicio <= fin) {
        medio = (inicio + fin) / 2;

        if (v[medio] == x) {
            posicion = medio;
            fin = medio - 1;
        } else if (v[medio] < x) {
            inicio = medio + 1;
        } else {
            fin = medio - 1;
        }
    }

    cout << "Primera posicion = " << posicion << endl;

    return 0;
}
