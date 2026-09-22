// Ejercicio 87 - Elemento mayoritario (Boyer-Moore)
#include <iostream>
using namespace std;

int main() {
    int v[100];
    int n;

    cout << "Ingrese N: ";
    cin >> n;

    cout << "Ingrese los elementos: ";
    for (int i = 0; i < n; i++) cin >> v[i];

    int candidato = v[0];
    int votos = 0;

    for (int i = 0; i < n; i++) {
        if (votos == 0) {
            candidato = v[i];
            votos = 1;
        } else if (v[i] == candidato) {
            votos++;
        } else {
            votos--;
        }
    }

    // hay que verificar que realmente supere N/2
    int cant = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] == candidato) cant++;
    }

    if (cant > n / 2) {
        cout << "Mayoritario = " << candidato << endl;
    } else {
        cout << "No hay elemento mayoritario" << endl;
    }

    return 0;
}
