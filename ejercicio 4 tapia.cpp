#include <iostream>
using namespace std;

int main() {
    double v[6];
    double suma = 0;
    double promedio;

    cout << "Ingrese 6 numeros reales: ";
    for (int i = 0; i < 6; i++) {
        cin >> v[i];
    }

    for (int i = 0; i < 6; i++) {
        suma = suma + v[i];
    }

    promedio = suma / 6;

    cout << "Promedio = " << promedio << endl;

    return 0;
}
