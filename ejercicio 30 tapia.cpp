#include <iostream>
using namespace std;

int main() {
    int v[100];
    int n;
    int menor;
    int segundo;
    int existe = 0;

    cout << "Ingrese N: ";
    cin >> n;

    cout << "Ingrese los elementos: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    menor = v[0];
    for (int i = 1; i < n; i++) {
        if (v[i] < menor) {
            menor = v[i];
        }
    }

    segundo = menor;
    for (int i = 0; i < n; i++) {
        if (v[i] != menor) {
            if (existe == 0) {
                segundo = v[i];
                existe = 1;
            } else if (v[i] < segundo) {
                segundo = v[i];
            }
        }
    }

    if (existe == 1) {
        cout << "Segundo menor = " << segundo << endl;
    } else {
        cout << "No existe un segundo menor distinto" << endl;
    }

    return 0;
}
