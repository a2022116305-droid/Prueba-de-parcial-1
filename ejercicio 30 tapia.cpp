// Ejercicio 30 - Segundo menor distinto
#include <iostream>
using namespace std;

int main() {
    int v[100];
    int n;

    cout << "Ingrese N: ";
    cin >> n;

    cout << "Ingrese los elementos: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int men = v[0];
    for (int i = 1; i < n; i++) {
        if (v[i] < men) men = v[i];
    }

    bool hay = false;
    int seg = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] != men) {
            if (!hay || v[i] < seg) {
                seg = v[i];
                hay = true;
            }
        }
    }

    if (hay) {
        cout << "Segundo menor = " << seg << endl;
    } else {
        cout << "No existe un segundo menor distinto" << endl;
    }

    return 0;
}
