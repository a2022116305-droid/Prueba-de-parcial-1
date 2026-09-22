#include <iostream>
using namespace std;

int main() {
    int v[100];
    int resultado[100];
    int n;
    int cant = 0;
    int repetido;

    cout << "Ingrese N: ";
    cin >> n;

    cout << "Ingrese los elementos: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for (int i = 0; i < n; i++) {
        repetido = 0;

        for (int j = 0; j < cant; j++) {
            if (resultado[j] == v[i]) {
                repetido = 1;
            }
        }

        if (repetido == 0) {
            resultado[cant] = v[i];
            cant = cant + 1;
        }
    }

    cout << "Sin duplicados: ";
    for (int i = 0; i < cant; i++) {
        cout << resultado[i] << " ";
    }
    cout << endl;

    return 0;
}
