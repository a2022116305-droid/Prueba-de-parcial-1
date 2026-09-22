#include <iostream>
using namespace std;

int particionar(int v[], int inicio, int fin) {
    int pivote = v[fin];
    int i = inicio - 1;
    int auxiliar;

    for (int j = inicio; j < fin; j++) {
        if (v[j] <= pivote) {
            i = i + 1;

            auxiliar = v[i];
            v[i] = v[j];
            v[j] = auxiliar;
        }
    }

    auxiliar = v[i + 1];
    v[i + 1] = v[fin];
    v[fin] = auxiliar;

    return i + 1;
}

void quickSort(int v[], int inicio, int fin) {
    int posPivote;

    if (inicio < fin) {
        posPivote = particionar(v, inicio, fin);

        quickSort(v, inicio, posPivote - 1);
        quickSort(v, posPivote + 1, fin);
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

    quickSort(v, 0, n - 1);

    cout << "Ordenado: ";
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
