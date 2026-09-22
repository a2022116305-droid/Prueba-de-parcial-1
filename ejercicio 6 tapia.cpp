#include <iostream>
using namespace std;

int main() {
    int v[7];
    int menor;

    cout << "Ingrese 7 numeros enteros: ";
    for (int i = 0; i < 7; i++) {
        cin >> v[i];
    }

    menor = v[0];
    for (int i = 1; i < 7; i++) {
        if (v[i] < menor) {
            menor = v[i];
        }
    }

    cout << "Menor = " << menor << endl;

    return 0;
}
