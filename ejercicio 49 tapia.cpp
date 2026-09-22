#include <iostream>
using namespace std;

int main() {
    double v[100];
    int n;
    double suma = 0;
    double promedio;

    cout << "Ingrese N: ";
    cin >> n;

    cout << "Ingrese los elementos: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for (int i = 0; i < n; i++) {
        suma = suma + v[i];
    }

    promedio = suma / n;

    cout << "Promedio = " << promedio << "; Mayores: ";
    for (int i = 0; i < n; i++) {
        if (v[i] > promedio) {
            cout << v[i] << " ";
        }
    }
    cout << endl;

    return 0;
}
