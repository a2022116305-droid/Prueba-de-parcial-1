// Ejercicio 27 - Producto escalar
#include <iostream>
using namespace std;

int main() {
    int a[100], b[100];
    int n;
    long long prod = 0;

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
        prod += (long long)a[i] * b[i];
    }

    cout << "Producto escalar = " << prod << endl;

    return 0;
}
