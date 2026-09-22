#include <iostream>
using namespace std;

int main() {
    int v[100];
    int n;
    int mayor;
    int segundo;
    int existe = 0;

    cout << "Ingrese N: ";
    cin >> n;

    cout << "Ingrese los elementos: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    mayor = v[0];
    for (int i = 1; i < n; i++) {
        if (v[i] > mayor) {
            mayor = v[i];
        }
    }

    segundo = mayor;
    for (int i = 0; i < n; i++) {
        if (v[i] != mayor) {
            if (existe == 0) {
                segundo = v[i];
                existe = 1;
            } else if (v[i] > segundo) {
                segundo = v[i];
            }
        }
    }

    if (existe == 1) {
        cout << "Segundo mayor = " << segundo << endl;
    } else {
        cout << "No existe un segundo mayor distinto" << endl;
    }

    return 0;
}
