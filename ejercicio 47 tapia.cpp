// Ejercicio 47 - Moda
#include <iostream>
using namespace std;

int main() {
    int v[100];
    int n;

    cout << "Ingrese N: ";
    cin >> n;

    cout << "Ingrese los elementos: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int moda = v[0];
    int mejor = 0;

    for (int i = 0; i < n; i++) {
        int cant = 0;
        for (int j = 0; j < n; j++) {
            if (v[j] == v[i]) cant++;
        }

        // si empata me quedo con el valor mas chico
        if (cant > mejor || (cant == mejor && v[i] < moda)) {
            mejor = cant;
            moda = v[i];
        }
    }

    cout << "Moda = " << moda << "; Frecuencia = " << mejor << endl;

    return 0;
}
