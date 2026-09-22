// Ejercicio 67 - Dos numeros cuya suma sea X
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

    bool encontrado = false;

    for (int i = 0; i < n && !encontrado; i++) {
        for (int j = i + 1; j < n; j++) {
            if (v[i] + v[j] == x) {
                cout << "Indices: " << i << " y " << j;
                cout << "; Valores: " << v[i] << " + " << v[j] << " = " << x << endl;
                encontrado = true;
                break;
            }
        }
    }

    if (!encontrado) {
        cout << "No existe un par que sume " << x << endl;
    }

    return 0;
}
