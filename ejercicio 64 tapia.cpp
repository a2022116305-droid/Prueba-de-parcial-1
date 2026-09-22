// Ejercicio 64 - Particion alrededor de un pivote
#include <iostream>
using namespace std;

int main() {
    int v[100];
    int n, x;

    cout << "Ingrese N: ";
    cin >> n;

    cout << "Ingrese los elementos: ";
    for (int i = 0; i < n; i++) cin >> v[i];

    cout << "Ingrese el pivote X: ";
    cin >> x;

    int bajo = 0;
    int medio = 0;
    int alto = n - 1;

    while (medio <= alto) {
        if (v[medio] < x) {
            int aux = v[bajo];
            v[bajo] = v[medio];
            v[medio] = aux;
            bajo++;
            medio++;
        } else if (v[medio] == x) {
            medio++;
        } else {
            int aux = v[alto];
            v[alto] = v[medio];
            v[medio] = aux;
            alto--;
        }
    }

    for (int i = 0; i < n; i++) cout << v[i] << " ";
    cout << endl;

    return 0;
}
