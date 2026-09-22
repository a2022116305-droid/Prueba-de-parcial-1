// Ejercicio 89 - Agua atrapada entre barras
#include <iostream>
using namespace std;

int main() {
    int v[100];
    int n;

    cout << "Ingrese N: ";
    cin >> n;

    cout << "Ingrese las alturas: ";
    for (int i = 0; i < n; i++) cin >> v[i];

    int izq = 0;
    int der = n - 1;
    int maxIzq = 0, maxDer = 0;
    int agua = 0;

    while (izq < der) {
        if (v[izq] < v[der]) {
            if (v[izq] >= maxIzq) {
                maxIzq = v[izq];
            } else {
                agua += maxIzq - v[izq];
            }
            izq++;
        } else {
            if (v[der] >= maxDer) {
                maxDer = v[der];
            } else {
                agua += maxDer - v[der];
            }
            der--;
        }
    }

    cout << "Agua atrapada = " << agua << endl;

    return 0;
}
