// Ejercicio 40 - Comparar dos vectores
#include <iostream>
using namespace std;

int main() {
    int a[100], b[100];
    int n;
    bool iguales = true;

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
        if (a[i] != b[i]) {
            iguales = false;
            break;
        }
    }

    cout << "Iguales: ";
    if (iguales) {
        cout << "SI" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
