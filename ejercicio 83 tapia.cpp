// Ejercicio 83 - Heap Sort con arreglo
#include <iostream>
using namespace std;

void bajar(int v[], int n, int i) {
    int mayor = i;
    int izq = 2 * i + 1;
    int der = 2 * i + 2;

    if (izq < n && v[izq] > v[mayor]) mayor = izq;
    if (der < n && v[der] > v[mayor]) mayor = der;

    if (mayor != i) {
        int aux = v[i];
        v[i] = v[mayor];
        v[mayor] = aux;
        bajar(v, n, mayor);
    }
}

int main() {
    int v[100];
    int n;

    cout << "Ingrese N: ";
    cin >> n;

    cout << "Ingrese los elementos: ";
    for (int i = 0; i < n; i++) cin >> v[i];

    // armo el heap maximo
    for (int i = n / 2 - 1; i >= 0; i--) {
        bajar(v, n, i);
    }

    // saco la raiz una por una y la mando al final
    for (int i = n - 1; i > 0; i--) {
        int aux = v[0];
        v[0] = v[i];
        v[i] = aux;
        bajar(v, i, 0);
    }

    for (int i = 0; i < n; i++) cout << v[i] << " ";
    cout << endl;

    return 0;
}
