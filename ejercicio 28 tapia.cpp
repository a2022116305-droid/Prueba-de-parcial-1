#include <iostream>
using namespace std;

int main() {
    int v[100];
    int n;
    int mayor;
    int menor;

    cout << "Ingrese N: ";
    cin >> n;

    cout << "Ingrese los elementos: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    mayor = v[0];
    menor = v[0];

    for (int i = 1; i < n; i++) {
        if (v[i] > mayor) {
            mayor = v[i];
        }
        if (v[i] < menor) {
            menor = v[i];
        }
    }

    cout << "Diferencia = " << mayor - menor << endl;

    return 0;
}
