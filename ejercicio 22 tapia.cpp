#include <iostream>
using namespace std;

int main() {
    int v[100];
    int n;
    int ultimo;

    cout << "Ingrese N: ";
    cin >> n;

    cout << "Ingrese los elementos: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    ultimo = v[n - 1];

    for (int i = n - 1; i > 0; i--) {
        v[i] = v[i - 1];
    }

    v[0] = ultimo;

    cout << "Resultado: ";
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
