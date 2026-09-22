#include <iostream>
using namespace std;

int main() {
    int a[100];
    int b[100];
    int n;
    int iguales = 1;

    cout << "Ingrese N: ";
    cin >> n;

    cout << "Elementos de A: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Elementos de B: ";
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    for (int i = 0; i < n; i++) {
        if (a[i] != b[i]) {
            iguales = 0;
        }
    }

    if (iguales == 1) {
        cout << "Iguales: SI" << endl;
    } else {
        cout << "Iguales: NO" << endl;
    }

    return 0;
}
