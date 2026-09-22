// Ejercicio 62 - Rotacion K posiciones a la izquierda
#include <iostream>
using namespace std;

int main() {
    int v[100], aux[100];
    int n, k;

    cout << "Ingrese N: ";
    cin >> n;
    cout << "Ingrese K: ";
    cin >> k;

    cout << "Ingrese los elementos: ";
    for (int i = 0; i < n; i++) cin >> v[i];

    k = k % n;

    for (int i = 0; i < n; i++) {
        aux[i] = v[(i + k) % n];
    }

    for (int i = 0; i < n; i++) cout << aux[i] << " ";
    cout << endl;

    return 0;
}
