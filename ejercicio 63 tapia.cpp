#include <iostream>
using namespace std;

void invertir(int v[], int desde, int hasta) {
    int auxiliar;

    while (desde < hasta) {
        auxiliar = v[desde];
        v[desde] = v[hasta];
        v[hasta] = auxiliar;

        desde = desde + 1;
        hasta = hasta - 1;
    }
}

int main() {
    int v[100];
    int n;
    int k;

    cout << "Ingrese N: ";
    cin >> n;
    cout << "Ingrese K: ";
    cin >> k;

    cout << "Ingrese los elementos: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    k = k % n;

    invertir(v, 0, n - 1);
    invertir(v, 0, k - 1);
    invertir(v, k, n - 1);

    cout << "Resultado: ";
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
