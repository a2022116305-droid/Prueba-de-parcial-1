#include <iostream>
using namespace std;

int main() {
    int v[100];
    int n;
    int ceros;
    int unos;
    int largo;
    int mayorLargo = 0;

    cout << "Ingrese N: ";
    cin >> n;

    cout << "Ingrese los elementos (0 o 1): ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for (int i = 0; i < n; i++) {
        ceros = 0;
        unos = 0;

        for (int j = i; j < n; j++) {
            if (v[j] == 0) {
                ceros = ceros + 1;
            } else {
                unos = unos + 1;
            }

            if (ceros == unos) {
                largo = j - i + 1;

                if (largo > mayorLargo) {
                    mayorLargo = largo;
                }
            }
        }
    }

    cout << "Longitud maxima = " << mayorLargo << endl;

    return 0;
}
