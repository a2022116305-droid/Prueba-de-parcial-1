#include <iostream>
using namespace std;

int main() {
    int v[100];
    int n;
    int p;
    int x;

    cout << "Ingrese N: ";
    cin >> n;

    cout << "Ingrese los elementos: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    cout << "Valor a insertar: ";
    cin >> x;

    cout << "Posicion donde insertarlo: ";
    cin >> p;

    if (p < 0 || p > n || n >= 100) {
        cout << "No se puede insertar" << endl;
    } else {
        for (int i = n; i > p; i--) {
            v[i] = v[i - 1];
        }

        v[p] = x;
        n = n + 1;

        cout << "Resultado: ";
        for (int i = 0; i < n; i++) {
            cout << v[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
