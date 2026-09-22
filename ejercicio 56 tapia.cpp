#include <iostream>
using namespace std;

int main() {
    int v[100];
    int n;
    int cambios = 0;

    cout << "Ingrese N: ";
    cin >> n;

    cout << "Ingrese los elementos: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for (int i = 0; i < n - 1; i++) {
        if (v[i] > 0 && v[i + 1] < 0) {
            cambios = cambios + 1;
        } else if (v[i] < 0 && v[i + 1] > 0) {
            cambios = cambios + 1;
        }
    }

    cout << "Cambios de signo = " << cambios << endl;

    return 0;
}
