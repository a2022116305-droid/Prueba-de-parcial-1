// Ejercicio 95 - Maximo de cada ventana de tamano K
#include <iostream>
using namespace std;

int main() {
    int v[100];
    int deque[100];
    int frente = 0, atras = 0;
    int n, k;

    cout << "Ingrese N: ";
    cin >> n;
    cout << "Ingrese K: ";
    cin >> k;

    cout << "Ingrese los elementos: ";
    for (int i = 0; i < n; i++) cin >> v[i];

    for (int i = 0; i < n; i++) {
        while (atras > frente && v[deque[atras - 1]] <= v[i]) {
            atras--;
        }
        deque[atras] = i;
        atras++;

        if (deque[frente] <= i - k) {
            frente++;
        }

        if (i >= k - 1) {
            cout << v[deque[frente]] << " ";
        }
    }
    cout << endl;

    return 0;
}
