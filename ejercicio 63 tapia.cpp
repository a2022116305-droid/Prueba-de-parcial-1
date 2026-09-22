// Ejercicio 63 - Rotacion in situ por reversas
#include <iostream>
using namespace std;

void invertir(int v[], int desde, int hasta) {
    while (desde < hasta) {
        int aux = v[desde];
        v[desde] = v[hasta];
        v[hasta] = aux;
        desde++;
        hasta--;
    }
}

int main() {
    int v[100];
    int n, k;

    cout << "Ingrese N: ";
    cin >> n;
    cout << "Ingrese K: ";
    cin >> k;

    cout << "Ingrese los elementos: ";
    for (int i = 0; i < n; i++) cin >> v[i];

    k = k % n;

    // invierto todo, despues cada parte por separado
    invertir(v, 0, n - 1);
    invertir(v, 0, k - 1);
    invertir(v, k, n - 1);

    for (int i = 0; i < n; i++) cout << v[i] << " ";
    cout << endl;

    return 0;
}
