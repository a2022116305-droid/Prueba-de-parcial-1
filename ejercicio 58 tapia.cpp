#include <iostream>
using namespace std;

int main() {
    int v[100];
    int n;
    int diferencia;
    int mayorDiferencia;
    int posicion = 0;

    cout << "Ingrese N: ";
    cin >> n;

    cout << "Ingrese los elementos: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    mayorDiferencia = v[0] - v[1];
    if (mayorDiferencia < 0) {
        mayorDiferencia = mayorDiferencia * (-1);
    }

    for (int i = 1; i < n - 1; i++) {
        diferencia = v[i] - v[i + 1];
        if (diferencia < 0) {
            diferencia = diferencia * (-1);
        }

        if (diferencia > mayorDiferencia) {
            mayorDiferencia = diferencia;
            posicion = i;
        }
    }

    cout << "Par: " << v[posicion] << " " << v[posicion + 1];
    cout << "; Diferencia = " << mayorDiferencia << endl;

    return 0;
}
