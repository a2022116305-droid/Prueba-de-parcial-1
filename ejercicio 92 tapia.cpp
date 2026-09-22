#include <iostream>
using namespace std;

int main() {
    int t[100];
    int resultado[100];
    int pila[100];
    int tope = 0;
    int n;
    int posicion;

    cout << "Ingrese N: ";
    cin >> n;

    cout << "Ingrese las temperaturas: ";
    for (int i = 0; i < n; i++) {
        cin >> t[i];
        resultado[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        while (tope > 0 && t[i] > t[pila[tope - 1]]) {
            posicion = pila[tope - 1];
            tope = tope - 1;

            resultado[posicion] = i - posicion;
        }

        pila[tope] = i;
        tope = tope + 1;
    }

    cout << "Dias: ";
    for (int i = 0; i < n; i++) {
        cout << resultado[i] << " ";
    }
    cout << endl;

    return 0;
}
