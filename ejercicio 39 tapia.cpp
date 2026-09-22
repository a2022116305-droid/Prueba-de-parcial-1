// Ejercicio 39 - Invertir el vector in situ
#include <iostream>
using namespace std;

int main() {
    int v[100];
    int n;

    cout << "Ingrese N: ";
    cin >> n;

    cout << "Ingrese los elementos: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int i = 0;
    int j = n - 1;
    while (i < j) {
        int aux = v[i];
        v[i] = v[j];
        v[j] = aux;
        i++;
        j--;
    }

    for (int k = 0; k < n; k++) {
        cout << v[k] << " ";
    }
    cout << endl;

    return 0;
}
