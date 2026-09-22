// Ejercicio 21 - Intercambiar primero y ultimo
#include <iostream>
using namespace std;

int main() {
    int v[50];
    int n;

    cout << "Ingrese N (2 a 50): ";
    cin >> n;

    cout << "Ingrese los " << n << " elementos: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int aux = v[0];
    v[0] = v[n - 1];
    v[n - 1] = aux;

    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
