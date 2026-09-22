#include <iostream>
using namespace std;

int main() {
    int v[100];
    int n;
    int x;
    int i;

    cout << "Ingrese N: ";
    cin >> n;

    cout << "Ingrese los elementos: ";
    for (i = 0; i < n; i++) {
        cin >> v[i];
    }

    cout << "Valor a eliminar: ";
    cin >> x;

    i = 0;
    while (i < n) {
        if (v[i] == x) {
            for (int j = i; j < n - 1; j++) {
                v[j] = v[j + 1];
            }
            n = n - 1;
        } else {
            i = i + 1;
        }
    }

    cout << "Resultado: ";
    for (i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
