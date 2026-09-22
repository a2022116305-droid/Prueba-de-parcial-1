// Ejercicio 91 - Siguiente elemento mayor
#include <iostream>
using namespace std;

int main() {
    int v[100], res[100];
    int pila[100];    // uso un arreglo como pila de indices
    int tope = 0;
    int n;

    cout << "Ingrese N: ";
    cin >> n;

    cout << "Ingrese los elementos: ";
    for (int i = 0; i < n; i++) cin >> v[i];

    for (int i = n - 1; i >= 0; i--) {
        while (tope > 0 && pila[tope - 1] <= v[i]) {
            tope--;
        }

        if (tope == 0) {
            res[i] = -1;
        } else {
            res[i] = pila[tope - 1];
        }

        pila[tope] = v[i];
        tope++;
    }

    for (int i = 0; i < n; i++) cout << res[i] << " ";
    cout << endl;

    return 0;
}
