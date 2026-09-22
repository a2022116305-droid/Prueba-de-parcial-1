#include <iostream>
using namespace std;

int main() {
    int v[100];
    int n;
    int minimo;
    int maximo;

    cout << "Ingrese N: ";
    cin >> n;

    cout << "Ingrese los elementos: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    minimo = v[0];
    maximo = v[0];

    for (int i = 1; i < n; i++) {
        if (v[i] < minimo) {
            minimo = v[i];
        }
        if (v[i] > maximo) {
            maximo = v[i];
        }
    }

    cout << "Minimo = " << minimo;
    cout << "; Maximo = " << maximo;
    cout << "; Amplitud = " << maximo - minimo << endl;

    return 0;
}
