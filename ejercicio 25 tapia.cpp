// Ejercicio 25 - Sumar dos vectores
#include <iostream>
using namespace std;

int main() {
    int a[100], b[100], c[100];
    int n;

    cout << "Ingrese N: ";
    cin >> n;

    cout << "Elementos de A: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Elementos de B: ";
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    for (int i = 0; i < n; i++) {
        c[i] = a[i] + b[i];
    }

    cout << "C: ";
    for (int i = 0; i < n; i++) {
        cout << c[i] << " ";
    }
    cout << endl;

    return 0;
}
