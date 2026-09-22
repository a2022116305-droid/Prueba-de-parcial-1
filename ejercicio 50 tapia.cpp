#include <iostream>
using namespace std;

int main() {
    double v[100];
    int n;
    double suma = 0;
    double promedio;
    double distancia;
    double menorDistancia;
    int posicion = 0;

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

    menorDistancia = v[0] - promedio;
    if (menorDistancia < 0) {
        menorDistancia = menorDistancia * (-1);
    }

    for (int i = 1; i < n; i++) {
        distancia = v[i] - promedio;
        if (distancia < 0) {
            distancia = distancia * (-1);
        }

        if (distancia < menorDistancia) {
            menorDistancia = distancia;
            posicion = i;
        }
    }

    cout << "Promedio = " << promedio;
    cout << "; Mas cercano = " << v[posicion] << endl;

    return 0;
}
