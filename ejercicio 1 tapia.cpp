#include <iostream>
using namespace std;

int main() {
    int v[5];

    cout << "Ingrese 5 numeros enteros: ";
    for (int i = 0; i < 5; i++) {
        cin >> v[i];
    }

    cout << "El vector es: ";
    for (int i = 0; i < 5; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
