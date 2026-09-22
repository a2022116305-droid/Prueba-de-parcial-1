// Ejercicio 79 - Comprobar permutacion de 1..N
#include <iostream>
using namespace std;

int main() {
    int v[100];
    bool visto[101];
    int n;
    bool ok = true;

    cout << "Ingrese N: ";
    cin >> n;

    for (int i = 0; i <= n; i++) visto[i] = false;

    cout << "Ingrese los elementos: ";
    for (int i = 0; i < n; i++) cin >> v[i];

    for (int i = 0; i < n; i++) {
        if (v[i] < 1 || v[i] > n) {
            ok = false;
            break;
        }
        if (visto[v[i]]) {
            ok = false;
            break;
        }
        visto[v[i]] = true;
    }

    cout << "Es permutacion: ";
    if (ok) {
        cout << "SI" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
