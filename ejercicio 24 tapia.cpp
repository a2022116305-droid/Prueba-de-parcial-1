// Ejercicio 24 - Separar pares e impares
#include <iostream>
using namespace std;

int main() {
    int v[100];
    int pares[100], impares[100];
    int n, cp = 0, ci = 0;

    cout << "Ingrese N: ";
    cin >> n;

    cout << "Ingrese los elementos: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for (int i = 0; i < n; i++) {
        if (v[i] % 2 == 0) {
            pares[cp] = v[i];
            cp++;
        } else {
            impares[ci] = v[i];
            ci++;
        }
    }

    cout << "Pares: ";
    for (int i = 0; i < cp; i++) {
        cout << pares[i] << " ";
    }

    cout << "; Impares: ";
    for (int i = 0; i < ci; i++) {
        cout << impares[i] << " ";
    }
    cout << endl;

    return 0;
}
