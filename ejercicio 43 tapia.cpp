#include <iostream>
using namespace std;

int main() {
    int v[100];
    int n;
    int posMenor;
    int auxiliar;

    cout << "Ingrese N: ";
    cin >> n;

    cout << "Ingrese los elementos: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for (int i = 0; i < n - 1; i++) {
        posMenor = i;

        for (int j = i + 1; j < n; j++) {
            if (v[j] < v[posMenor]) {
                posMenor = j;
            }
        }

        auxiliar = v[i];
        v[i] = v[posMenor];
        v[posMenor] = auxiliar;
    }

    cout << "Ordenado: ";
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
