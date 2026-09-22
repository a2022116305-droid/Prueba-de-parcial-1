// Ejercicio 100 - Mediana de dos arreglos ordenados
#include <iostream>
using namespace std;

int main() {
    int a[100], b[100];
    int n, m;

    cout << "Tamano de A: ";
    cin >> n;
    cout << "Elementos de A (ordenados): ";
    for (int i = 0; i < n; i++) cin >> a[i];

    cout << "Tamano de B: ";
    cin >> m;
    cout << "Elementos de B (ordenados): ";
    for (int i = 0; i < m; i++) cin >> b[i];

    int total = n + m;
    int i = 0, j = 0;
    int actual = 0, anterior = 0;

    // avanzo como en una fusion pero sin guardar el arreglo entero
    for (int paso = 0; paso <= total / 2; paso++) {
        anterior = actual;

        if (i < n && (j >= m || a[i] <= b[j])) {
            actual = a[i];
            i++;
        } else {
            actual = b[j];
            j++;
        }
    }

    double mediana;
    if (total % 2 == 1) {
        mediana = actual;
    } else {
        mediana = (anterior + actual) / 2.0;
    }

    cout << "Mediana = " << mediana << endl;

    return 0;
}
