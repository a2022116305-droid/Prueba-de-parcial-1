#include <iostream>
using namespace std;

int main() {
    int v[100];
    int n;
    int suma;
    int mayorSuma;
    int mejorInicio = 0;
    int mejorFin = 0;

    cout << "Ingrese N: ";
    cin >> n;

    cout << "Ingrese los elementos: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    mayorSuma = v[0];

    for (int i = 0; i < n; i++) {
        suma = 0;

        for (int j = i; j < n; j++) {
            suma = suma + v[j];

            if (suma > mayorSuma) {
                mayorSuma = suma;
                mejorInicio = i;
                mejorFin = j;
            }
        }
    }

    cout << "Suma maxima = " << mayorSuma;
    cout << "; Indices = " << mejorInicio << ".." << mejorFin;
    cout << "; Segmento: ";
    for (int i = mejorInicio; i <= mejorFin; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
