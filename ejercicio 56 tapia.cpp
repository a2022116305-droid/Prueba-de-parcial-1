// Ejercicio 56 - Contar cambios de signo
#include <iostream>
using namespace std;

int main() {
    int v[100];
    int n;

    cout << "Ingrese N: ";
    cin >> n;

    cout << "Ingrese los elementos: ";
    for (int i = 0; i < n; i++) cin >> v[i];

    int cambios = 0;
    int anterior = 0;

    for (int i = 0; i < n; i++) {
        if (v[i] == 0) continue;

        int signo;
        if (v[i] > 0) {
            signo = 1;
        } else {
            signo = -1;
        }

        if (anterior != 0 && signo != anterior) {
            cambios++;
        }
        anterior = signo;
    }

    cout << "Cambios de signo = " << cambios << endl;

    return 0;
}
