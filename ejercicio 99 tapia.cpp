// Ejercicio 99 - Duplicado y faltante en 1..N
#include <iostream>
using namespace std;

int main() {
    int v[100];
    int conteo[101];
    int n;

    cout << "Ingrese N: ";
    cin >> n;

    for (int i = 0; i <= n; i++) conteo[i] = 0;

    cout << "Ingrese los elementos: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        conteo[v[i]]++;
    }

    int duplicado = -1, faltante = -1;

    for (int i = 1; i <= n; i++) {
        if (conteo[i] == 2) duplicado = i;
        if (conteo[i] == 0) faltante = i;
    }

    cout << "Duplicado = " << duplicado;
    cout << "; Faltante = " << faltante << endl;

    return 0;
}
