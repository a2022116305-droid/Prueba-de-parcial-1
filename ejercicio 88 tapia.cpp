#include <iostream>
using namespace std;

int main() {
    int v[100];
    int resultado[100];
    int n;
    int producto;

    cout << "Ingrese N: ";
    cin >> n;

    cout << "Ingrese los elementos: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for (int i = 0; i < n; i++) {
        producto = 1;

        for (int j = 0; j < n; j++) {
            if (j != i) {
                producto = producto * v[j];
            }
        }

        resultado[i] = producto;
    }

    cout << "Resultado: ";
    for (int i = 0; i < n; i++) {
        cout << resultado[i] << " ";
    }
    cout << endl;

    return 0;
}
