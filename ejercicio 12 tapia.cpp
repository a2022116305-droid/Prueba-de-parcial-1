#include <iostream>
using namespace std;

int main() {
    int v[5];
    int cuadrados[5];

    cout << "Ingrese 5 numeros enteros: ";
    for (int i = 0; i < 5; i++) {
        cin >> v[i];
    }

    for (int i = 0; i < 5; i++) {
        cuadrados[i] = v[i] * v[i];
    }

    cout << "Cuadrados: ";
    for (int i = 0; i < 5; i++) {
        cout << cuadrados[i] << " ";
    }
    cout << endl;

    return 0;
}
