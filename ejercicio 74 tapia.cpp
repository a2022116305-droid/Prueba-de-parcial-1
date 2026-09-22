// Ejercicio 74 - Consultas de suma por rango
#include <iostream>
using namespace std;

int main() {
    int v[100], p[101];
    int n, q;

    cout << "Ingrese N: ";
    cin >> n;

    cout << "Ingrese los elementos: ";
    for (int i = 0; i < n; i++) cin >> v[i];

    // p[i] = suma de los primeros i elementos
    p[0] = 0;
    for (int i = 0; i < n; i++) {
        p[i + 1] = p[i] + v[i];
    }

    cout << "Cantidad de consultas: ";
    cin >> q;

    for (int c = 0; c < q; c++) {
        int l, r;
        cout << "Consulta " << c + 1 << " (L R): ";
        cin >> l >> r;
        cout << p[r + 1] - p[l] << endl;
    }

    return 0;
}
