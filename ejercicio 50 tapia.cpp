// Ejercicio 50 - Elemento mas cercano al promedio
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

    int pos = 0;
    double mejorDist = v[0] - prom;
    if (mejorDist < 0) mejorDist = -mejorDist;

    for (int i = 1; i < n; i++) {
        double d = v[i] - prom;
        if (d < 0) d = -d;
        if (d < mejorDist) {
            mejorDist = d;
            pos = i;
        }
    }

    cout << "Promedio = " << prom << "; Mas cercano = " << v[pos] << endl;

    return 0;
}
