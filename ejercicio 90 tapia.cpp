// Ejercicio 90 - Maxima area entre dos barras
#include <iostream>
using namespace std;

int main() {
    int v[100];
    int n;

    cout << "Ingrese N: ";
    cin >> n;

    cout << "Ingrese las alturas: ";
    for (int i = 0; i < n; i++) cin >> v[i];

    int i = 0;
    int j = n - 1;
    int mejor = 0;

    while (i < j) {
        int altura;
        if (v[i] < v[j]) {
            altura = v[i];
        } else {
            altura = v[j];
        }

        int area = altura * (j - i);
        if (area > mejor) mejor = area;

        // muevo el lado mas bajo
        if (v[i] < v[j]) {
            i++;
        } else {
            j--;
        }
    }

    cout << "Area maxima = " << mejor << endl;

    return 0;
}
