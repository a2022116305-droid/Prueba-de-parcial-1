#include <iostream>
using namespace std;

int main() {
    int v[5];
    int suma = 0;

    cout << "Ingrese 5 numeros enteros: ";
    for (int i = 0; i < 5; i++) {
        cin >> v[i];
    }

    for (int i = 0; i < 5; i++) {
        suma = suma + v[i];
    }

    cout << "Suma = " << suma << endl;

    return 0;
}
