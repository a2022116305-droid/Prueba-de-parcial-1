#include <iostream>
using namespace std;

int main() {
    int v[100];
    int n;
    int primero;

    cout << "Ingrese N: ";
    cin >> n;

    cout << "Ingrese los elementos: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    primero = v[0];

    for (int i = 0; i < n - 1; i++) {
        v[i] = v[i + 1];
    }

    v[n - 1] = primero;

    cout << "Resultado: ";
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
