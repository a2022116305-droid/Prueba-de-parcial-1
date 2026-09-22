// Ejercicio 12 - Elevar al cuadrado
#include <iostream>
using namespace std;

int main() {
    int v[5];
    int cuad[5];

    cout << "Ingrese 5 numeros enteros: ";
    for (int i = 0; i < 5; i++) {
        cin >> v[i];
    }

    for (int i = 0; i < 5; i++) {
        cuad[i] = v[i] * v[i];
    }

    for (int i = 0; i < 5; i++) {
        cout << cuad[i] << " ";
    }
    cout << endl;

    return 0;
}
