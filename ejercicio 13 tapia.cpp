#include <iostream>
using namespace std;

int main() {
    int v[7];

    cout << "Ingrese 7 numeros enteros: ";
    for (int i = 0; i < 7; i++) {
        cin >> v[i];
    }

    for (int i = 0; i < 7; i++) {
        if (v[i] < 0) {
            v[i] = 0;
        }
    }

    cout << "Resultado: ";
    for (int i = 0; i < 7; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
