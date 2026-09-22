#include <iostream>
using namespace std;

int main() {
    int v[100];
    int n;
    int largo = 1;
    int mayorLargo = 1;
    int inicio = 0;
    int mejorInicio = 0;

    cout << "Ingrese N: ";
    cin >> n;

    cout << "Ingrese los elementos: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for (int i = 1; i < n; i++) {
        if (v[i] > v[i - 1]) {
            largo = largo + 1;
        } else {
            largo = 1;
            inicio = i;
        }

        if (largo > mayorLargo) {
            mayorLargo = largo;
            mejorInicio = inicio;
        }
    }

    cout << "Longitud = " << mayorLargo << "; Tramo: ";
    for (int i = mejorInicio; i < mejorInicio + mayorLargo; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
