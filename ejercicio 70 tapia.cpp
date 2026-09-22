#include <iostream>
using namespace std;

int main() {
    int v[100];
    int n;
    int suma;
    int menorSuma;
    int mejorInicio = 0;
    int mejorFin = 0;

    cout << "Ingrese N: ";
    cin >> n;

    cout << "Ingrese los elementos: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    menorSuma = v[0];

    for (int i = 0; i < n; i++) {
        suma = 0;

        for (int j = i; j < n; j++) {
            suma = suma + v[j];

            if (suma < menorSuma) {
                menorSuma = suma;
                mejorInicio = i;
                mejorFin = j;
            }
        }
    }

    cout << "Suma minima = " << menorSuma;
    cout << "; Indices = " << mejorInicio << ".." << mejorFin << endl;

    return 0;
}
