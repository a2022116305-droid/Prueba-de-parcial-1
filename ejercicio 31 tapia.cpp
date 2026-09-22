#include <iostream>
using namespace std;

int main() {
    int v[100];
    int mostrado[100];
    int n;
    int cantidad;

    cout << "Ingrese N: ";
    cin >> n;

    cout << "Ingrese los elementos: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        mostrado[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        if (mostrado[i] == 0) {
            cantidad = 1;

            for (int j = i + 1; j < n; j++) {
                if (v[j] == v[i]) {
                    cantidad = cantidad + 1;
                    mostrado[j] = 1;
                }
            }

            cout << v[i] << " -> " << cantidad << endl;
        }
    }

    return 0;
}
