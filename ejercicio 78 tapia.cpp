#include <iostream>
using namespace std;

int main() {
    int v[100];
    int conteo[101];
    int n;
    int pos = 0;

    for (int i = 0; i <= 100; i++) {
        conteo[i] = 0;
    }

    cout << "Ingrese N: ";
    cin >> n;

    cout << "Ingrese los elementos (de 0 a 100): ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for (int i = 0; i < n; i++) {
        conteo[v[i]] = conteo[v[i]] + 1;
    }

    for (int valor = 0; valor <= 100; valor++) {
        for (int j = 0; j < conteo[valor]; j++) {
            v[pos] = valor;
            pos = pos + 1;
        }
    }

    cout << "Ordenado: ";
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
