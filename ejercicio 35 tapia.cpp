// Ejercicio 35 - Compactar ceros al final
#include <iostream>
using namespace std;

int main() {
    int v[100];
    int n;

    cout << "Ingrese N: ";
    cin >> n;

    cout << "Ingrese los elementos: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int k = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] != 0) {
            v[k] = v[i];
            k++;
        }
    }

    // el resto lo relleno con ceros
    while (k < n) {
        v[k] = 0;
        k++;
    }

    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
