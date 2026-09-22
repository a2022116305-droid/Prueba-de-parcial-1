// Ejercicio 18 - Obtener la primera posicion de un valor
#include <iostream>
using namespace std;

int main() {
    int v[10];
    int x;
    int pos = -1;

    cout << "Ingrese 10 numeros enteros: ";
    for (int i = 0; i < 10; i++) {
        cin >> v[i];
    }

    cout << "Ingrese el valor a buscar: ";
    cin >> x;

    for (int i = 0; i < 10; i++) {
        if (v[i] == x) {
            pos = i;
            break;   // solo me interesa la primera
        }
    }

    cout << "Primera posicion = " << pos << endl;

    return 0;
}
