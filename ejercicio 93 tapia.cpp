// Ejercicio 93 - Ventana de suma maxima de tamano K
#include <iostream>
using namespace std;

int main() {
    int v[100];
    int n, k;

    cout << "Ingrese N: ";
    cin >> n;
    cout << "Ingrese K: ";
    cin >> k;

    cout << "Ingrese los elementos: ";
    for (int i = 0; i < n; i++) cin >> v[i];

    int suma = 0;
    for (int i = 0; i < k; i++) suma += v[i];

    int mejor = suma;
    int ini = 0;

    // voy corriendo la ventana: sumo el que entra y resto el que sale
    for (int i = k; i < n; i++) {
        suma = suma + v[i] - v[i - k];
        if (suma > mejor) {
            mejor = suma;
            ini = i - k + 1;
        }
    }

    cout << "Suma maxima = " << mejor << "; Ventana: ";
    for (int i = ini; i < ini + k; i++) cout << v[i] << " ";
    cout << endl;

    return 0;
}
