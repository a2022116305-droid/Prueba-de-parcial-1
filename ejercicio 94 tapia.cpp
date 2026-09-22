#include <iostream>
using namespace std;

int main() {
    int v[100];
    int n;
    int k;
    int minimo;

    cout << "Ingrese N: ";
    cin >> n;
    cout << "Ingrese K: ";
    cin >> k;

    cout << "Ingrese los elementos: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    cout << "Minimos: ";
    for (int i = 0; i <= n - k; i++) {
        minimo = v[i];

        for (int j = i; j < i + k; j++) {
            if (v[j] < minimo) {
                minimo = v[j];
            }
        }

        cout << minimo << " ";
    }
    cout << endl;

    return 0;
}
