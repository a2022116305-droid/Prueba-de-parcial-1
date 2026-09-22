// Ejercicio 54 - Mezclar dos vectores intercalando
#include <iostream>
using namespace std;

int main() {
    int a[100], b[100], c[200];
    int n, m, k = 0;

    cout << "Tamano de A: ";
    cin >> n;
    cout << "Elementos de A: ";
    for (int i = 0; i < n; i++) cin >> a[i];

    cout << "Tamano de B: ";
    cin >> m;
    cout << "Elementos de B: ";
    for (int i = 0; i < m; i++) cin >> b[i];

    int i = 0, j = 0;
    while (i < n && j < m) {
        c[k] = a[i];
        k++;
        i++;
        c[k] = b[j];
        k++;
        j++;
    }

    while (i < n) {
        c[k] = a[i];
        k++;
        i++;
    }
    while (j < m) {
        c[k] = b[j];
        k++;
        j++;
    }

    for (int p = 0; p < k; p++) cout << c[p] << " ";
    cout << endl;

    return 0;
}
