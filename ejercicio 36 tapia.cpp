// Ejercicio 36 - Eliminar duplicados conservando primera aparicion
#include <iostream>
using namespace std;

int main() {
    int v[100];
    int res[100];
    int n, k = 0;

    cout << "Ingrese N: ";
    cin >> n;

    cout << "Ingrese los elementos: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for (int i = 0; i < n; i++) {
        bool repetido = false;
        for (int j = 0; j < k; j++) {
            if (res[j] == v[i]) {
                repetido = true;
                break;
            }
        }
        if (!repetido) {
            res[k] = v[i];
            k++;
        }
    }

    for (int i = 0; i < k; i++) {
        cout << res[i] << " ";
    }
    cout << endl;

    return 0;
}
