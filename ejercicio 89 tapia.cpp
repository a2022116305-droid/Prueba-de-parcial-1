#include <iostream>
using namespace std;

int main() {
    int v[100];
    int n;
    int mayorIzquierda;
    int mayorDerecha;
    int menorDeLosDos;
    int agua = 0;

    cout << "Ingrese N: ";
    cin >> n;

    cout << "Ingrese las alturas: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for (int i = 0; i < n; i++) {
        mayorIzquierda = v[i];
        for (int j = 0; j < i; j++) {
            if (v[j] > mayorIzquierda) {
                mayorIzquierda = v[j];
            }
        }

        mayorDerecha = v[i];
        for (int j = i + 1; j < n; j++) {
            if (v[j] > mayorDerecha) {
                mayorDerecha = v[j];
            }
        }

        if (mayorIzquierda < mayorDerecha) {
            menorDeLosDos = mayorIzquierda;
        } else {
            menorDeLosDos = mayorDerecha;
        }

        agua = agua + (menorDeLosDos - v[i]);
    }

    cout << "Agua atrapada = " << agua << endl;

    return 0;
}
