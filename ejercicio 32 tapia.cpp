// Ejercicio 32 - Eliminar logicamente un elemento por posicion
#include <iostream>
using namespace std;

int main() {
    int v[100];
    int n, p;

    cout << "Ingrese N: ";
    cin >> n;

    cout << "Ingrese los elementos: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    cout << "Ingrese la posicion a eliminar: ";
    cin >> p;

    if (p < 0 || p >= n) {
        cout << "Posicion invalida" << endl;
        return 0;
    }

    // corro todo un lugar a la izquierda desde p
    for (int i = p; i < n - 1; i++) {
        v[i] = v[i + 1];
    }
    n--;   // tamano logico

    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
