// Ejercicio 68 - Tres numeros cuya suma sea X
#include <iostream>
using namespace std;

int main() {
    int v[100];
    int n, x;

    cout << "Ingrese N: ";
    cin >> n;

    cout << "Ingrese los elementos: ";
    for (int i = 0; i < n; i++) cin >> v[i];

    cout << "Ingrese X: ";
    cin >> x;

    bool hay = false;

    for (int i = 0; i < n && !hay; i++) {
        for (int j = i + 1; j < n && !hay; j++) {
            for (int k = j + 1; k < n; k++) {
                if (v[i] + v[j] + v[k] == x) {
                    cout << "Valores: " << v[i] << " " << v[j] << " " << v[k] << endl;
                    hay = true;
                    break;
                }
            }
        }
    }

    if (!hay) {
        cout << "No existe una terna que sume " << x << endl;
    }

    return 0;
}
