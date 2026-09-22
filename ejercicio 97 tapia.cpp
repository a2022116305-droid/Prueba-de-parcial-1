// Ejercicio 97 - Maxima longitud con igual cantidad de 0 y 1
#include <iostream>
using namespace std;

int main() {
    int v[100];
    int primera[201];   // guarda donde vi por primera vez cada suma
    int n;

    cout << "Ingrese N: ";
    cin >> n;

    cout << "Ingrese los elementos (0 o 1): ";
    for (int i = 0; i < n; i++) cin >> v[i];

    // la suma va de -n a n, asi que la desplazo sumandole n
    for (int i = 0; i <= 2 * n; i++) primera[i] = -2;

    int suma = 0;
    int mejor = 0;
    primera[n] = -1;   // suma 0 antes de empezar

    for (int i = 0; i < n; i++) {
        if (v[i] == 1) {
            suma++;
        } else {
            suma--;
        }

        int pos = suma + n;
        if (primera[pos] == -2) {
            primera[pos] = i;
        } else {
            int largo = i - primera[pos];
            if (largo > mejor) mejor = largo;
        }
    }

    cout << "Longitud maxima = " << mejor << endl;

    return 0;
}
