#include <iostream>
using namespace std;

int main() {
    int v[100];
    int prefijo[100];
    int n;

    cout << "Ingrese N: ";
    cin >> n;

    cout << "Ingrese los elementos: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    prefijo[0] = v[0];

    for (int i = 1; i < n; i++) {
        prefijo[i] = prefijo[i - 1] + v[i];
    }

    cout << "Prefijos: ";
    for (int i = 0; i < n; i++) {
        cout << prefijo[i] << " ";
    }
    cout << endl;

    return 0;
}
