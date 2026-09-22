#include <iostream>
using namespace std;

int main() {
    int v[8];
    int suma = 0;

    cout << "Ingrese 8 numeros enteros: ";
    for (int i = 0; i < 8; i++) {
        cin >> v[i];
    }

    for (int i = 0; i < 8; i++) {
        if (i % 2 == 0) {
            suma = suma + v[i];
        }
    }

    cout << "Suma indices pares = " << suma << endl;

    return 0;
}
