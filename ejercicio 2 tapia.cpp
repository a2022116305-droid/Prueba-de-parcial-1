#include <iostream>
using namespace std;

int main() {
    int v[6];

    cout << "Ingrese 6 numeros enteros: ";
    for (int i = 0; i < 6; i++) {
        cin >> v[i];
    }

    cout << "Al reves: ";
    for (int i = 5; i >= 0; i--) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
