#include <iostream>
using namespace std;

int main() {
    int v[100];
    int n;
    int suma = 0;
    int sumaCompleta = 0;

    cout << "Ingrese N (cantidad de valores): ";
    cin >> n;

    cout << "Ingrese los valores: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for (int i = 0; i < n; i++) {
        suma = suma + v[i];
    }

    for (int i = 0; i <= n; i++) {
        sumaCompleta = sumaCompleta + i;
    }

    cout << "Faltante = " << sumaCompleta - suma << endl;

    return 0;
}
