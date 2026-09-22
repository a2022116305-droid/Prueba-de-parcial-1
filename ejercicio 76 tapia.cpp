// Ejercicio 76 - Mayor producto de tres elementos
#include <iostream>
using namespace std;

int main() {
    int v[100];
    int n;

    cout << "Ingrese N: ";
    cin >> n;

    cout << "Ingrese los elementos: ";
    for (int i = 0; i < n; i++) cin >> v[i];

    // ordeno con burbuja y despues comparo las dos opciones posibles
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (v[j] > v[j + 1]) {
                int aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
            }
        }
    }

    long long op1 = (long long)v[n - 1] * v[n - 2] * v[n - 3];
    long long op2 = (long long)v[0] * v[1] * v[n - 1];

    if (op1 >= op2) {
        cout << "Mayor producto = " << op1;
        cout << " (" << v[n - 3] << " * " << v[n - 2] << " * " << v[n - 1] << ")" << endl;
    } else {
        cout << "Mayor producto = " << op2;
        cout << " (" << v[0] << " * " << v[1] << " * " << v[n - 1] << ")" << endl;
    }

    return 0;
}
