// Ejercicio 82 - Merge Sort con arreglos
#include <iostream>
using namespace std;

void fusionar(int v[], int ini, int medio, int fin) {
    int temp[100];
    int i = ini, j = medio + 1, k = 0;

    while (i <= medio && j <= fin) {
        if (v[i] <= v[j]) {
            temp[k] = v[i];
            i++;
        } else {
            temp[k] = v[j];
            j++;
        }
        k++;
    }

    while (i <= medio) {
        temp[k] = v[i];
        i++;
        k++;
    }
    while (j <= fin) {
        temp[k] = v[j];
        j++;
        k++;
    }

    for (int p = 0; p < k; p++) {
        v[ini + p] = temp[p];
    }
}

void mergeSort(int v[], int ini, int fin) {
    if (ini < fin) {
        int medio = (ini + fin) / 2;
        mergeSort(v, ini, medio);
        mergeSort(v, medio + 1, fin);
        fusionar(v, ini, medio, fin);
    }
}

int main() {
    int v[100];
    int n;

    cout << "Ingrese N: ";
    cin >> n;

    cout << "Ingrese los elementos: ";
    for (int i = 0; i < n; i++) cin >> v[i];

    mergeSort(v, 0, n - 1);

    for (int i = 0; i < n; i++) cout << v[i] << " ";
    cout << endl;

    return 0;
}
