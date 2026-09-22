#include <iostream>
using namespace std;

int main() {
    int v[8];
    int negativos = 0;

    cout << "Ingrese 8 numeros enteros: ";
    for (int i = 0; i < 8; i++) {
        cin >> v[i];
    }

    for (int i = 0; i < 8; i++) {
        if (v[i] < 0) {
            negativos = negativos + 1;
        }
    }

    cout << "Negativos = " << negativos << endl;

    return 0;
}
