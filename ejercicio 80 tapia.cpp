#include <iostream>
using namespace std;

int main() {
    int a[100];
    int p[100];
    int b[100];
    int n;

    cout << "Ingrese N: ";
    cin >> n;

    cout << "Elementos de A: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Indices de P: ";
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }

    for (int i = 0; i < n; i++) {
        b[i] = a[p[i]];
    }

    cout << "B: ";
    for (int i = 0; i < n; i++) {
        cout << b[i] << " ";
    }
    cout << endl;

    return 0;
}
