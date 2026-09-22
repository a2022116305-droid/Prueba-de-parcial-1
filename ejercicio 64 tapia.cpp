#include <iostream>
using namespace std;

int main() {
    int v[100];
    int resultado[100];
    int n;
    int x;
    int cant = 0;

    cout << "Ingrese N: ";
    cin >> n;

    cout << "Ingrese los elementos: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    cout << "Ingrese el pivote X: ";
    cin >> x;

    for (int i = 0; i < n; i++) {
        if (v[i] < x) {
            resultado[cant] = v[i];
            cant = cant + 1;
        }
    }

    for (int i = 0; i < n; i++) {
        if (v[i] == x) {
            resultado[cant] = v[i];
            cant = cant + 1;
        }
    }

    for (int i = 0; i < n; i++) {
        if (v[i] > x) {
            resultado[cant] = v[i];
            cant = cant + 1;
        }
    }

    cout << "Resultado: ";
    for (int i = 0; i < n; i++) {
        cout << resultado[i] << " ";
    }
    cout << endl;

    return 0;
}
