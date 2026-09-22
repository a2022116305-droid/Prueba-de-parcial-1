#include <iostream>
using namespace std;

int main() {
    int v[8];
    int positivos = 0;

    cout << "Ingrese 8 numeros enteros: ";
    for (int i = 0; i < 8; i++) {
        cin >> v[i];
    }

    for (int i = 0; i < 8; i++) {
        if (v[i] > 0) {
            positivos = positivos + 1;
        }
    }

    cout << "Positivos = " << positivos << endl;

    return 0;
}
