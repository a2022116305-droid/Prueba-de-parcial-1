#include <iostream>
using namespace std;

int main() {
    double v[100];
    int n;
    double auxiliar;
    double mediana;

    cout << "Ingrese N: ";
    cin >> n;

    cout << "Ingrese los elementos: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (v[j] > v[j + 1]) {
                auxiliar = v[j];
                v[j] = v[j + 1];
                v[j + 1] = auxiliar;
            }
        }
    }

    if (n % 2 == 1) {
        mediana = v[n / 2];
    } else {
        mediana = (v[n / 2 - 1] + v[n / 2]) / 2;
    }

    cout << "Mediana = " << mediana << endl;

    return 0;
}
