#include <iostream>
using namespace std;

int main() {
    int v[100];
    int pares[100];
    int impares[100];
    int n;
    int cantPares = 0;
    int cantImpares = 0;

    cout << "Ingrese N: ";
    cin >> n;

    cout << "Ingrese los elementos: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for (int i = 0; i < n; i++) {
        if (v[i] % 2 == 0) {
            pares[cantPares] = v[i];
            cantPares = cantPares + 1;
        } else {
            impares[cantImpares] = v[i];
            cantImpares = cantImpares + 1;
        }
    }

    cout << "Pares: ";
    for (int i = 0; i < cantPares; i++) {
        cout << pares[i] << " ";
    }

    cout << "; Impares: ";
    for (int i = 0; i < cantImpares; i++) {
        cout << impares[i] << " ";
    }
    cout << endl;

    return 0;
}
