#include <iostream>
using namespace std;

int main() {
    int v[100];
    int resultado[100];
    int pila[100];
    int tope = 0;
    int n;

    cout << "Ingrese N: ";
    cin >> n;

    cout << "Ingrese los elementos: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for (int i = n - 1; i >= 0; i--) {
        while (tope > 0 && pila[tope - 1] <= v[i]) {
            tope = tope - 1;
        }

        if (tope == 0) {
            resultado[i] = -1;
        } else {
            resultado[i] = pila[tope - 1];
        }

        pila[tope] = v[i];
        tope = tope + 1;
    }

    cout << "Siguiente mayor: ";
    for (int i = 0; i < n; i++) {
        cout << resultado[i] << " ";
    }
    cout << endl;

    return 0;
}
