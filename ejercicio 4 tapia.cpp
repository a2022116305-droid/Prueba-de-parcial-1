// Ejercicio 4 - Calcular el promedio
#include <iostream>
using namespace std;

int main() {
    double v[6];
    double suma = 0;

    cout << "Ingrese 6 numeros reales: ";
    for (int i = 0; i < 6; i++) {
        cin >> v[i];
        suma += v[i];
    }

    double prom = suma / 6;
    cout << "Promedio = " << prom << endl;

    return 0;
}
