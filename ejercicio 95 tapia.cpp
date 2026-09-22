#include <iostream>
using namespace std;

int main() {
    int v[100];
    int n;
    int k;
    int maximo;

    cout << "Ingrese N: ";
    cin >> n;
    cout << "Ingrese K: ";
    cin >> k;

    cout << "Ingrese los elementos: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    cout << "Maximos: ";
    for (int i = 0; i <= n - k; i++) {
        maximo = v[i];

        for (int j = i; j < i + k; j++) {
            if (v[j] > maximo) {
                maximo = v[j];
            }
        }

        cout << maximo << " ";
    }
    cout << endl;

    return 0;
}
