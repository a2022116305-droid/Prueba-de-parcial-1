#include <iostream>
using namespace std;

int main() {
    int v[100];
    int prefijo[100];
    int n;
    int q;
    int l;
    int r;
    int suma;

    cout << "Ingrese N: ";
    cin >> n;

    cout << "Ingrese los elementos: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    prefijo[0] = v[0];
    for (int i = 1; i < n; i++) {
        prefijo[i] = prefijo[i - 1] + v[i];
    }

    cout << "Cantidad de consultas: ";
    cin >> q;

    for (int c = 0; c < q; c++) {
        cout << "Consulta " << c + 1 << " (L R): ";
        cin >> l >> r;

        if (l == 0) {
            suma = prefijo[r];
        } else {
            suma = prefijo[r] - prefijo[l - 1];
        }

        cout << suma << endl;
    }

    return 0;
}
