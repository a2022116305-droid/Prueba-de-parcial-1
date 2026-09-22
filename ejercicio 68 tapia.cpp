#include <iostream>
using namespace std;

int main() {
    int v[100];
    int n;
    int x;
    int encontrado = 0;

    cout << "Ingrese N: ";
    cin >> n;

    cout << "Ingrese los elementos: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    cout << "Ingrese X: ";
    cin >> x;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                if (v[i] + v[j] + v[k] == x && encontrado == 0) {
                    cout << "Valores: " << v[i] << " " << v[j] << " " << v[k] << endl;
                    encontrado = 1;
                }
            }
        }
    }

    if (encontrado == 0) {
        cout << "No existe una terna que sume " << x << endl;
    }

    return 0;
}
