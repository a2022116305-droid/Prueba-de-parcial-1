// Ejercicio 92 - Temperaturas: dias hasta una mayor
#include <iostream>
using namespace std;

int main() {
    int t[100], res[100];
    int pila[100];   // guarda indices
    int tope = 0;
    int n;

    cout << "Ingrese N: ";
    cin >> n;

    cout << "Ingrese las temperaturas: ";
    for (int i = 0; i < n; i++) {
        cin >> t[i];
        res[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        while (tope > 0 && t[i] > t[pila[tope - 1]]) {
            int idx = pila[tope - 1];
            tope--;
            res[idx] = i - idx;
        }
        pila[tope] = i;
        tope++;
    }

    for (int i = 0; i < n; i++) cout << res[i] << " ";
    cout << endl;

    return 0;
}
