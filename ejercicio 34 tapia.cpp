// Ejercicio 34 - Eliminar todas las apariciones de X
#include <iostream>
using namespace std;

int main() {
    int v[100];
    int n, x;

    cout << "Ingrese N: ";
    cin >> n;

    cout << "Ingrese los elementos: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    cout << "Valor a eliminar: ";
    cin >> x;

    // k marca donde va el proximo elemento que se queda
    int k = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] != x) {
            v[k] = v[i];
            k++;
        }
    }
    n = k;

    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
