// Ejercicio 46 - Mediana de un conjunto
#include <iostream>
using namespace std;

int main() {
    double v[100];
    int n;

    cout << "Ingrese N: ";
    cin >> n;

    cout << "Ingrese los elementos: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    // ordeno con burbuja porque no puedo usar std::sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (v[j] > v[j + 1]) {
                double aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
            }
        }
    }

    double mediana;
    if (n % 2 == 1) {
        mediana = v[n / 2];
    } else {
        mediana = (v[n / 2 - 1] + v[n / 2]) / 2.0;
    }

    cout << "Mediana = " << mediana << endl;

    return 0;
}
