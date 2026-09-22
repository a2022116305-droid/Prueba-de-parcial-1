#include <iostream>
using namespace std;

int main() {
    int v[100];
    int n;
    int izquierda;
    int derecha;
    int auxiliar;

    cout << "Ingrese N: ";
    cin >> n;

    cout << "Ingrese los elementos: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    izquierda = 0;
    derecha = n - 1;

    while (izquierda < derecha) {
        auxiliar = v[izquierda];
        v[izquierda] = v[derecha];
        v[derecha] = auxiliar;

        izquierda = izquierda + 1;
        derecha = derecha - 1;
    }

    cout << "Invertido: ";
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
