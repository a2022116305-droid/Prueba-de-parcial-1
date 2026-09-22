#include <iostream>
using namespace std;

int main() {
    int v[100];
    int n;
    int sumaIzquierda;
    int sumaDerecha;
    int indice = -1;

    cout << "Ingrese N: ";
    cin >> n;

    cout << "Ingrese los elementos: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for (int i = 0; i < n; i++) {
        sumaIzquierda = 0;
        for (int j = 0; j < i; j++) {
            sumaIzquierda = sumaIzquierda + v[j];
        }

        sumaDerecha = 0;
        for (int j = i + 1; j < n; j++) {
            sumaDerecha = sumaDerecha + v[j];
        }

        if (sumaIzquierda == sumaDerecha && indice == -1) {
            indice = i;
        }
    }

    if (indice == -1) {
        cout << "No hay indice de equilibrio" << endl;
    } else {
        cout << "Indice de equilibrio = " << indice << endl;
    }

    return 0;
}
