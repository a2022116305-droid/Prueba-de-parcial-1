// Ejercicio 96 - Longitud minima con suma al menos S
#include <iostream>
using namespace std;

int main() {
    int v[100];
    int n, s;

    cout << "Ingrese N: ";
    cin >> n;
    cout << "Ingrese S: ";
    cin >> s;

    cout << "Ingrese los elementos: ";
    for (int i = 0; i < n; i++) cin >> v[i];

    int ini = 0;
    int suma = 0;
    int mejor = n + 1;

    for (int fin = 0; fin < n; fin++) {
        suma += v[fin];

        // achico la ventana mientras siga alcanzando S
        while (suma >= s) {
            int largo = fin - ini + 1;
            if (largo < mejor) mejor = largo;
            suma -= v[ini];
            ini++;
        }
    }

    if (mejor == n + 1) {
        cout << "No existe un subarreglo con esa suma" << endl;
    } else {
        cout << "Longitud minima = " << mejor << endl;
    }

    return 0;
}
