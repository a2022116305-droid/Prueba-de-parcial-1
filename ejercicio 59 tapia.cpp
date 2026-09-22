// Ejercicio 59 - Detectar palindromo numerico
#include <iostream>
using namespace std;

int main() {
    int v[100];
    int n;
    bool pal = true;

    cout << "Ingrese N: ";
    cin >> n;

    cout << "Ingrese los elementos: ";
    for (int i = 0; i < n; i++) cin >> v[i];

    int i = 0;
    int j = n - 1;
    while (i < j) {
        if (v[i] != v[j]) {
            pal = false;
            break;
        }
        i++;
        j--;
    }

    cout << "Palindromo: ";
    if (pal) {
        cout << "SI" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
