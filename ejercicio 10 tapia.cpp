#include <iostream>
using namespace std;

int main() {
    int v[10];
    int impares = 0;

    cout << "Ingrese 10 numeros enteros: ";
    for (int i = 0; i < 10; i++) {
        cin >> v[i];
    }

    for (int i = 0; i < 10; i++) {
        if (v[i] % 2 != 0) {
            impares = impares + 1;
        }
    }

    cout << "Impares = " << impares << endl;

    return 0;
}
