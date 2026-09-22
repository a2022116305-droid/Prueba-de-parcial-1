// Ejercicio 73 - Prefijos acumulados
#include <iostream>
using namespace std;

int main() {
    int v[100], p[100];
    int n;

    cout << "Ingrese N: ";
    cin >> n;

    cout << "Ingrese los elementos: ";
    for (int i = 0; i < n; i++) cin >> v[i];

    p[0] = v[0];
    for (int i = 1; i < n; i++) {
        p[i] = p[i - 1] + v[i];
    }

    cout << "Prefijos: ";
    for (int i = 0; i < n; i++) cout << p[i] << " ";
    cout << endl;

    return 0;
}
