#include <iostream>
using namespace std;

int main() {
    int v[100];
    int n;
    int auxiliar;

    cout << "Ingrese N: ";
    cin >> n;

    cout << "Ingrese los elementos: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (v[j] > v[j + 1]) {
                auxiliar = v[j];
                v[j] = v[j + 1];
                v[j + 1] = auxiliar;
            }
        }
    }

    cout << "Ordenado: ";
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
