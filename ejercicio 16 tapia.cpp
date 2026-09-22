#include <iostream>
using namespace std;

int main() {
    int v[10];
    int ceros = 0;

    cout << "Ingrese 10 numeros enteros: ";
    for (int i = 0; i < 10; i++) {
        cin >> v[i];
    }

    for (int i = 0; i < 10; i++) {
        if (v[i] == 0) {
            ceros = ceros + 1;
        }
    }

    cout << "Ceros = " << ceros << endl;

    return 0;
}
