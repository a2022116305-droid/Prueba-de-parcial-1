// Ejercicio 81 - QuickSort con arreglos
#include <iostream>
using namespace std;

int particionar(int v[], int ini, int fin) {
    int pivote = v[fin];
    int i = ini - 1;

    for (int j = ini; j < fin; j++) {
        if (v[j] <= pivote) {
            i++;
            int aux = v[i];
            v[i] = v[j];
            v[j] = aux;
        }
    }

    int aux = v[i + 1];
    v[i + 1] = v[fin];
    v[fin] = aux;

    return i + 1;
}

void quickSort(int v[], int ini, int fin) {
    if (ini < fin) {
        int p = particionar(v, ini, fin);
        quickSort(v, ini, p - 1);
        quickSort(v, p + 1, fin);
    }
}

int main() {
    int v[100];
    int n;

    cout << "Ingrese N: ";
    cin >> n;

    cout << "Ingrese los elementos: ";
    for (int i = 0; i < n; i++) cin >> v[i];

    quickSort(v, 0, n - 1);

    for (int i = 0; i < n; i++) cout << v[i] << " ";
    cout << endl;

    return 0;
}
