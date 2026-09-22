#include <iostream>
using namespace std;

int main() {
    int v[100];
    int n;
    int suma;
    int posicion;
    int mayorSuma;

    cout << "Ingrese N: ";
    cin >> n;

    cout << "Ingrese los elementos: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    mayorSuma = v[0];

    for (int i = 0; i < n; i++) {
        suma = 0;

        for (int largo = 1; largo <= n; largo++) {
            posicion = (i + largo - 1) % n;
            suma = suma + v[posicion];

            if (suma > mayorSuma) {
                mayorSuma = suma;
            }
        }
    }

    cout << "Suma maxima circular = " << mayorSuma << endl;

    return 0;
}
