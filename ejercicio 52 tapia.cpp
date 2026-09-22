#include <iostream>
using namespace std;

int main() {
    int a[100];
    int b[100];
    int c[100];
    int n;
    int m;
    int cant = 0;
    int estaEnB;
    int yaEsta;

    cout << "Tamano de A: ";
    cin >> n;
    cout << "Elementos de A: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Tamano de B: ";
    cin >> m;
    cout << "Elementos de B: ";
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    for (int i = 0; i < n; i++) {
        estaEnB = 0;

        for (int j = 0; j < m; j++) {
            if (b[j] == a[i]) {
                estaEnB = 1;
            }
        }

        yaEsta = 0;

        for (int j = 0; j < cant; j++) {
            if (c[j] == a[i]) {
                yaEsta = 1;
            }
        }

        if (estaEnB == 1 && yaEsta == 0) {
            c[cant] = a[i];
            cant = cant + 1;
        }
    }

    cout << "Interseccion: ";
    for (int i = 0; i < cant; i++) {
        cout << c[i] << " ";
    }
    cout << endl;

    return 0;
}
