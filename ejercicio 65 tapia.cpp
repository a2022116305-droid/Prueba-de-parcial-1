#include <iostream>
using namespace std;

int main() {
    int v[100];
    int n;
    int k;
    int auxiliar;

    cout << "Ingrese N: ";
    cin >> n;
    cout << "Ingrese K: ";
    cin >> k;

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

    if (k < 1 || k > n) {
        cout << "K invalido" << endl;
    } else {
        cout << k << ".er menor = " << v[k - 1] << endl;
    }

    return 0;
}
