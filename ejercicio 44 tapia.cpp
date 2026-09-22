#include <iostream>
using namespace std;

int main() {
    int v[100];
    int n;
    int actual;
    int j;

    cout << "Ingrese N: ";
    cin >> n;

    cout << "Ingrese los elementos: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for (int i = 1; i < n; i++) {
        actual = v[i];
        j = i - 1;

        while (j >= 0 && v[j] > actual) {
            v[j + 1] = v[j];
            j = j - 1;
        }

        v[j + 1] = actual;
    }

    cout << "Ordenado: ";
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
