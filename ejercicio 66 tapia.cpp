#include <iostream>
using namespace std;

int main() {
    int v[100];
    int distintos[100];
    int n;
    int k;
    int cant = 0;
    int repetido;
    int auxiliar;

    cout << "Ingrese N: ";
    cin >> n;
    cout << "Ingrese K: ";
    cin >> k;

    cout << "Ingrese los elementos: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for (int i = 0; i < n; i++) {
        repetido = 0;

        for (int j = 0; j < cant; j++) {
            if (distintos[j] == v[i]) {
                repetido = 1;
            }
        }

        if (repetido == 0) {
            distintos[cant] = v[i];
            cant = cant + 1;
        }
    }

    for (int i = 0; i < cant - 1; i++) {
        for (int j = 0; j < cant - 1 - i; j++) {
            if (distintos[j] < distintos[j + 1]) {
                auxiliar = distintos[j];
                distintos[j] = distintos[j + 1];
                distintos[j + 1] = auxiliar;
            }
        }
    }

    if (k < 1 || k > cant) {
        cout << "No existe ese K-esimo mayor distinto" << endl;
    } else {
        cout << k << ".er mayor distinto = " << distintos[k - 1] << endl;
    }

    return 0;
}
