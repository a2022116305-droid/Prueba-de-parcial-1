// Ejercicio 58 - Mayor diferencia absoluta consecutiva
#include <iostream>
using namespace std;

int main() {
    int v[100];
    int n;

    cout << "Ingrese N: ";
    cin >> n;

    cout << "Ingrese los elementos: ";
    for (int i = 0; i < n; i++) cin >> v[i];

    int pos = 0;
    int mejor = v[0] - v[1];
    if (mejor < 0) mejor = -mejor;

    for (int i = 1; i < n - 1; i++) {
        int d = v[i] - v[i + 1];
        if (d < 0) d = -d;
        if (d > mejor) {
            mejor = d;
            pos = i;
        }
    }

    cout << "Par: " << v[pos] << " " << v[pos + 1];
    cout << "; Diferencia = " << mejor << endl;

    return 0;
}
