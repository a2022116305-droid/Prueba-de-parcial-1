// Ejercicio 72 - Equilibrio izquierda-derecha
#include <iostream>
using namespace std;

int main() {
    int v[100];
    int n;
    int total = 0;

    cout << "Ingrese N: ";
    cin >> n;

    cout << "Ingrese los elementos: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        total += v[i];
    }

    int izq = 0;
    int indice = -1;

    for (int i = 0; i < n; i++) {
        int der = total - izq - v[i];
        if (izq == der) {
            indice = i;
            break;
        }
        izq += v[i];
    }

    if (indice == -1) {
        cout << "No hay indice de equilibrio" << endl;
    } else {
        cout << "Indice de equilibrio = " << indice << endl;
    }

    return 0;
}
