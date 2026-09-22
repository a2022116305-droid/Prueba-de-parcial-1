// Ejercicio 78 - Ordenamiento por conteo
#include <iostream>
using namespace std;

int main() {
    int v[100];
    int conteo[101];
    int n;

    for (int i = 0; i <= 100; i++) conteo[i] = 0;

    cout << "Ingrese N: ";
    cin >> n;

    cout << "Ingrese los elementos (0 a 100): ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        conteo[v[i]]++;
    }

    // vuelvo a armar el arreglo recorriendo el conteo
    int k = 0;
    for (int valor = 0; valor <= 100; valor++) {
        for (int j = 0; j < conteo[valor]; j++) {
            v[k] = valor;
            k++;
        }
    }

    for (int i = 0; i < n; i++) cout << v[i] << " ";
    cout << endl;

    return 0;
}
