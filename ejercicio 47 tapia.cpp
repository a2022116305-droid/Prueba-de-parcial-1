#include <iostream>
using namespace std;

int main() {
    int v[100];
    int n;
    int moda;
    int frecuencia = 0;
    int cantidad;

    cout << "Ingrese N: ";
    cin >> n;

    cout << "Ingrese los elementos: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    moda = v[0];

    for (int i = 0; i < n; i++) {
        cantidad = 0;

        for (int j = 0; j < n; j++) {
            if (v[j] == v[i]) {
                cantidad = cantidad + 1;
            }
        }

        if (cantidad > frecuencia) {
            frecuencia = cantidad;
            moda = v[i];
        } else if (cantidad == frecuencia && v[i] < moda) {
            moda = v[i];
        }
    }

    cout << "Moda = " << moda << "; Frecuencia = " << frecuencia << endl;

    return 0;
}
