#include <iostream>
using namespace std;

int main() {
    int v[50];
    int n;
    int auxiliar;

    cout << "Ingrese N (entre 2 y 50): ";
    cin >> n;

    cout << "Ingrese los " << n << " elementos: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    auxiliar = v[0];
    v[0] = v[n - 1];
    v[n - 1] = auxiliar;

    cout << "Resultado: ";
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
