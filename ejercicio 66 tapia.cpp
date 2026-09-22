// Ejercicio 66 - K-esimo mayor distinto
#include <iostream>
using namespace std;

int main() {
    int v[100];
    int dist[100];
    int n, k, cd = 0;

    cout << "Ingrese N: ";
    cin >> n;
    cout << "Ingrese K: ";
    cin >> k;

    cout << "Ingrese los elementos: ";
    for (int i = 0; i < n; i++) cin >> v[i];

    // primero me quedo con los valores distintos
    for (int i = 0; i < n; i++) {
        bool esta = false;
        for (int j = 0; j < cd; j++) {
            if (dist[j] == v[i]) esta = true;
        }
        if (!esta) {
            dist[cd] = v[i];
            cd++;
        }
    }

    if (k < 1 || k > cd) {
        cout << "No existe ese K-esimo mayor distinto" << endl;
        return 0;
    }

    for (int i = 0; i < k; i++) {
        int pos = i;
        for (int j = i + 1; j < cd; j++) {
            if (dist[j] > dist[pos]) pos = j;
        }
        int aux = dist[i];
        dist[i] = dist[pos];
        dist[pos] = aux;
    }

    cout << k << ".er mayor distinto = " << dist[k - 1] << endl;

    return 0;
}
