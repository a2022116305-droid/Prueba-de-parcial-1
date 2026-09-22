// Ejercicio 51 - Union sin duplicados
#include <iostream>
using namespace std;

int main() {
    int a[100], b[100], c[200];
    int n, m, k = 0;

    cout << "Tamano de A: ";
    cin >> n;
    cout << "Elementos de A: ";
    for (int i = 0; i < n; i++) cin >> a[i];

    cout << "Tamano de B: ";
    cin >> m;
    cout << "Elementos de B: ";
    for (int i = 0; i < m; i++) cin >> b[i];

    for (int i = 0; i < n; i++) {
        bool esta = false;
        for (int j = 0; j < k; j++) {
            if (c[j] == a[i]) esta = true;
        }
        if (!esta) {
            c[k] = a[i];
            k++;
        }
    }

    for (int i = 0; i < m; i++) {
        bool esta = false;
        for (int j = 0; j < k; j++) {
            if (c[j] == b[i]) esta = true;
        }
        if (!esta) {
            c[k] = b[i];
            k++;
        }
    }

    cout << "Union: ";
    for (int i = 0; i < k; i++) cout << c[i] << " ";
    cout << endl;

    return 0;
}
