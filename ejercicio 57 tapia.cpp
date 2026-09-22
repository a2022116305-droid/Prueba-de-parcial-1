#include <iostream>
using namespace std;

int main() {
    int v[100];
    int n;
    int suma;
    int mayorSuma;
    int posicion = 0;

    cout << "Ingrese N: ";
    cin >> n;

    cout << "Ingrese los elementos: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    mayorSuma = v[0] + v[1];

    for (int i = 1; i < n - 1; i++) {
        suma = v[i] + v[i + 1];

        if (suma > mayorSuma) {
            mayorSuma = suma;
            posicion = i;
        }
    }

    cout << "Par: " << v[posicion] << " " << v[posicion + 1];
    cout << "; Suma = " << mayorSuma << endl;

    return 0;
}
