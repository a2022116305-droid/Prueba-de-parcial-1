#include <iostream>
using namespace std;

int main() {
    int v[100];
    int n;
    int cantidad;
    int duplicado = -1;
    int faltante = -1;

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

        if (cantidad == 0) {
            faltante = valor;
        }

        if (cantidad > 1) {
            duplicado = valor;
        }
    }

    cout << "Duplicado = " << duplicado;
    cout << "; Faltante = " << faltante << endl;

    return 0;
}
