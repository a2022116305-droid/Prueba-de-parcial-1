// Ejercicio 55 - Fusionar dos vectores ordenados
#include <iostream>
using namespace std;

int main() {
    int a[100], b[100], c[200];
    int n, m, k = 0;

    cout << "Tamano de A: ";
    cin >> n;
    cout << "Elementos de A (ordenados): ";
    for (int i = 0; i < n; i++) cin >> a[i];

    cout << "Tamano de B: ";
    cin >> m;
    cout << "Elementos de B (ordenados): ";
    for (int i = 0; i < m; i++) cin >> b[i];

    int i = 0, j = 0;
    while (i < n && j < m) {
        if (a[i] <= b[j]) {
            c[k] = a[i];
            i++;
        } else {
            c[k] = b[j];
            j++;
        }
        k++;
    }

    while (i < n) {
        c[k] = a[i];
        i++;
        k++;
    }
    while (j < m) {
        c[k] = b[j];
        j++;
        k++;
    }

    for (int p = 0; p < k; p++) cout << c[p] << " ";
    cout << endl;

    return 0;
}
