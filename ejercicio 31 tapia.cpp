// Ejercicio 31 - Frecuencia de cada elemento
#include <iostream>
using namespace std;

int main() {
    int v[100];
    bool contado[100];
    int n;

    cout << "Ingrese N: ";
    cin >> n;

    cout << "Ingrese los elementos: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        contado[i] = false;
    }

    for (int i = 0; i < n; i++) {
        if (contado[i]) continue;   // ese valor ya lo mostre antes

        int cant = 1;
        for (int j = i + 1; j < n; j++) {
            if (v[j] == v[i]) {
                cant++;
                contado[j] = true;
            }
        }
        cout << v[i] << " -> " << cant << endl;
    }

    return 0;
}
