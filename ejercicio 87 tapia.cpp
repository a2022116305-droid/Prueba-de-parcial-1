#include <iostream>
using namespace std;

int main() {
    int v[100];
    int n;
    int candidato;
    int votos = 0;
    int cantidad = 0;

    cout << "Ingrese N: ";
    cin >> n;

    cout << "Ingrese los elementos: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    candidato = v[0];

    for (int i = 0; i < n; i++) {
        if (votos == 0) {
            candidato = v[i];
            votos = 1;
        } else if (v[i] == candidato) {
            votos = votos + 1;
        } else {
            votos = votos - 1;
        }
    }

    for (int i = 0; i < n; i++) {
        if (v[i] == candidato) {
            cantidad = cantidad + 1;
        }
    }

    if (cantidad > n / 2) {
        cout << "Mayoritario = " << candidato << endl;
    } else {
        cout << "No hay elemento mayoritario" << endl;
    }

    return 0;
}
