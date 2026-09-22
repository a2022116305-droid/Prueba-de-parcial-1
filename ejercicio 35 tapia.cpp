#include <iostream>
using namespace std;

int main() {
    int v[100];
    int aux[100];
    int n;
    int pos = 0;

    cout << "Ingrese N: ";
    cin >> n;

    cout << "Ingrese los elementos: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for (int i = 0; i < n; i++) {
        if (v[i] != 0) {
            aux[pos] = v[i];
            pos = pos + 1;
        }
    }

    for (int i = pos; i < n; i++) {
        aux[i] = 0;
    }

    cout << "Resultado: ";
    for (int i = 0; i < n; i++) {
        cout << aux[i] << " ";
    }
    cout << endl;

    return 0;
}
