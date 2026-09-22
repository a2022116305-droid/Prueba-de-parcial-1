// Ejercicio 53 - Diferencia A - B
#include <iostream>
using namespace std;

int main() {
    int a[100], b[100], c[100];
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
        bool enB = false;
        for (int j = 0; j < m; j++) {
            if (b[j] == a[i]) enB = true;
        }
        if (enB) continue;

        bool yaEsta = false;
        for (int j = 0; j < k; j++) {
            if (c[j] == a[i]) yaEsta = true;
        }
        if (!yaEsta) {
            c[k] = a[i];
            k++;
        }
    }

    cout << "Diferencia: ";
    for (int i = 0; i < k; i++) cout << c[i] << " ";
    cout << endl;

    return 0;
}
