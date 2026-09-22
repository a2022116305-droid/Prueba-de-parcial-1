#include <iostream>
using namespace std;

int main() {
    int v[10];
    int x;
    int apariciones = 0;

    cout << "Ingrese 10 numeros enteros: ";
    for (int i = 0; i < 10; i++) {
        cin >> v[i];
    }

    cout << "Ingrese el valor a contar: ";
    cin >> x;

    for (int i = 0; i < 10; i++) {
        if (v[i] == x) {
            apariciones = apariciones + 1;
        }
    }

    cout << "Apariciones = " << apariciones << endl;

    return 0;
}
