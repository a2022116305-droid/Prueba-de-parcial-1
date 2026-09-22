#include <iostream>
using namespace std;

void fusionar(int v[], int inicio, int medio, int fin) {
    int temporal[100];
    int i = inicio;
    int j = medio + 1;
    int cant = 0;

    while (i <= medio && j <= fin) {
        if (v[i] <= v[j]) {
            temporal[cant] = v[i];
            i = i + 1;
        } else {
            temporal[cant] = v[j];
            j = j + 1;
        }
        cant = cant + 1;
    }

    while (i <= medio) {
        temporal[cant] = v[i];
        i = i + 1;
        cant = cant + 1;
    }

    while (j <= fin) {
        temporal[cant] = v[j];
        j = j + 1;
        cant = cant + 1;
    }

    for (int k = 0; k < cant; k++) {
        v[inicio + k] = temporal[k];
    }
}

void mergeSort(int v[], int inicio, int fin) {
    int medio;

    if (inicio < fin) {
        medio = (inicio + fin) / 2;

        mergeSort(v, inicio, medio);
        mergeSort(v, medio + 1, fin);

        fusionar(v, inicio, medio, fin);
    }
}

int main() {
    int v[100];
    int n;

    cout << "Ingrese N: ";
    cin >> n;

    cout << "Ingrese los elementos: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    mergeSort(v, 0, n - 1);

    cout << "Ordenado: ";
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
