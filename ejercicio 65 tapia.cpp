// Ejercicio 65 - K-esimo menor sin std::sort
#include <iostream>
using namespace std;

int main() {
    int v[100];
    int n, k;

    cout << "Ingrese N: ";
    cin >> n;
    cout << "Ingrese K: ";
    cin >> k;

    cout << "Ingrese los elementos: ";
    for (int i = 0; i < n; i++) cin >> v[i];

    if (k < 1 || k > n) {
        cout << "K invalido" << endl;
        return 0;
    }

    // seleccion parcial: acomodo solo los primeros K
    for (int i = 0; i < k; i++) {
        int pos = i;
        for (int j = i + 1; j < n; j++) {
            if (v[j] < v[pos]) pos = j;
        }
        int aux = v[i];
        v[i] = v[pos];
        v[pos] = aux;
    }

    cout << k << ".er menor = " << v[k - 1] << endl;

    return 0;
}
