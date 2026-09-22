#include <iostream>
using namespace std;

int main() {
    int v[7];
    int mayor;

    cout << "Ingrese 7 numeros enteros: ";
    for (int i = 0; i < 7; i++) {
        cin >> v[i];
    }

    mayor = v[0];
    for (int i = 1; i < 7; i++) {
        if (v[i] > mayor) {
            mayor = v[i];
        }
    }

    cout << "Mayor = " << mayor << endl;

    return 0;
}
