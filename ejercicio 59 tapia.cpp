#include <iostream>
using namespace std;

int main() {
    int v[100];
    int n;
    int esPalindromo = 1;

    cout << "Ingrese N: ";
    cin >> n;

    cout << "Ingrese los elementos: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for (int i = 0; i < n / 2; i++) {
        if (v[i] != v[n - 1 - i]) {
            esPalindromo = 0;
        }
    }

    if (esPalindromo == 1) {
        cout << "Palindromo: SI" << endl;
    } else {
        cout << "Palindromo: NO" << endl;
    }

    return 0;
}
