#include <iostream>
using namespace std;

int main() {
    int a[100];
    int b[100];
    int c[200];
    int n;
    int m;
    int total;
    int i = 0;
    int j = 0;
    int cant = 0;
    double mediana;

    cout << "Tamano de A: ";
    cin >> n;
    cout << "Elementos de A (ordenados): ";
    for (int k = 0; k < n; k++) {
        cin >> a[k];
    }

    cout << "Tamano de B: ";
    cin >> m;
    cout << "Elementos de B (ordenados): ";
    for (int k = 0; k < m; k++) {
        cin >> b[k];
    }

    while (i < n && j < m) {
        if (a[i] <= b[j]) {
            c[cant] = a[i];
            i = i + 1;
        } else {
            c[cant] = b[j];
            j = j + 1;
        }
        cant = cant + 1;
    }

    while (i < n) {
        c[cant] = a[i];
        i = i + 1;
        cant = cant + 1;
    }

    while (j < m) {
        c[cant] = b[j];
        j = j + 1;
        cant = cant + 1;
    }

    total = n + m;

    if (total % 2 == 1) {
        mediana = c[total / 2];
    } else {
        mediana = (c[total / 2 - 1] + c[total / 2]) / 2.0;
    }

    cout << "Mediana = " << mediana << endl;

    return 0;
}
