// Ejercicio 77 - Histograma de enteros acotados
#include <iostream>
using namespace std;

int main() {
    int v[100];
    int frec[10];
    int n;

    for (int i = 0; i < 10; i++) frec[i] = 0;

    cout << "Ingrese N: ";
    cin >> n;

    cout << "Ingrese los elementos (0 a 9): ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (v[i] >= 0 && v[i] <= 9) {
            frec[v[i]]++;
        }
    }

    cout << "Frecuencias [0..9]: ";
    for (int i = 0; i < 10; i++) cout << frec[i] << " ";
    cout << endl;

    return 0;
}
