#include <iostream>
using namespace std;

int main() {
    int v[100];
    int n;
    int k;
    int suma;
    int mayorSuma;
    int inicio = 0;

    cout << "Ingrese N: ";
    cin >> n;
    cout << "Ingrese K: ";
    cin >> k;

    cout << "Ingrese los elementos: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    mayorSuma = 0;
    for (int i = 0; i < k; i++) {
        mayorSuma = mayorSuma + v[i];
    }

    for (int i = 1; i <= n - k; i++) {
        suma = 0;

        for (int j = i; j < i + k; j++) {
            suma = suma + v[j];
        }

        if (suma > mayorSuma) {
            mayorSuma = suma;
            inicio = i;
        }
    }

    cout << "Suma maxima = " << mayorSuma << "; Ventana: ";
    for (int i = inicio; i < inicio + k; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
