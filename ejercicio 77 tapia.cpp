#include <iostream>
using namespace std;

int main() {
    int v[100];
    int frecuencia[10];
    int n;

    for (int i = 0; i < 10; i++) {
        frecuencia[i] = 0;
    }

    cout << "Ingrese N: ";
    cin >> n;

    cout << "Ingrese los elementos (de 0 a 9): ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for (int i = 0; i < n; i++) {
        frecuencia[v[i]] = frecuencia[v[i]] + 1;
    }

    cout << "Frecuencias [0..9]: ";
    for (int i = 0; i < 10; i++) {
        cout << frecuencia[i] << " ";
    }
    cout << endl;

    return 0;
}
