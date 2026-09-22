// Ejercicio 49 - Valores mayores que el promedio
#include <iostream>
using namespace std;

int main() {
    double v[100];
    int n;
    double suma = 0;

    cout << "Ingrese N: ";
    cin >> n;

    cout << "Ingrese los elementos: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        suma += v[i];
    }

    double prom = suma / n;

    cout << "Promedio = " << prom << "; Mayores: ";
    for (int i = 0; i < n; i++) {
        if (v[i] > prom) {
            cout << v[i] << " ";
        }
    }
    cout << endl;

    return 0;
}
