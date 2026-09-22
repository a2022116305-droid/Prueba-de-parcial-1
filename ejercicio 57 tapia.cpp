// Ejercicio 57 - Mayor suma de dos consecutivos
#include <iostream>
using namespace std;

int main() {
    int v[100];
    int n;

    cout << "Ingrese N: ";
    cin >> n;

    cout << "Ingrese los elementos: ";
    for (int i = 0; i < n; i++) cin >> v[i];

    int pos = 0;
    int mejor = v[0] + v[1];

    for (int i = 1; i < n - 1; i++) {
        int s = v[i] + v[i + 1];
        if (s > mejor) {
            mejor = s;
            pos = i;
        }
    }

    cout << "Par: " << v[pos] << " " << v[pos + 1];
    cout << "; Suma = " << mejor << endl;

    return 0;
}
