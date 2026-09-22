// Ejercicio 43 - Ordenamiento por seleccion
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

    for (int i = 0; i < n - 1; i++) {
        int pos = i;
        for (int j = i + 1; j < n; j++) {
            if (v[j] < v[pos]) {
                pos = j;
            }
        }
        if (pos != i) {
            int aux = v[i];
            v[i] = v[pos];
            v[pos] = aux;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
