// Ejercicio 61 - Rotacion K posiciones a la derecha
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

    k = k % n;   // por si K es mayor que N

    for (int i = 0; i < n; i++) {
        aux[(i + k) % n] = v[i];
    }

    for (int i = 0; i < n; i++) cout << aux[i] << " ";
    cout << endl;

    return 0;
}
