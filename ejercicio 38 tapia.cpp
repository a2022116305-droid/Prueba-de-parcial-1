#include <iostream>
using namespace std;

int main() {
    int v[100];
    int n;
    int ordenado = 1;

    cout << "Ingrese N: ";
    cin >> n;

    cout << "Ingrese los elementos: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for (int i = 0; i < n - 1; i++) {
        if (v[i] < v[i + 1]) {
            ordenado = 0;
        }
    }

    if (ordenado == 1) {
        cout << "Ordenado descendentemente: SI" << endl;
    } else {
        cout << "Ordenado descendentemente: NO" << endl;
    }

    return 0;
}
