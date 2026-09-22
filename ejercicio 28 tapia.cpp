// Ejercicio 28 - Diferencia entre maximo y minimo
#include <iostream>
using namespace std;

int main() {
    int v[100];
    int n;

    cout << "Ingrese N: ";
    cin >> n;

    cout << "Ingrese los elementos: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int may = v[0];
    int men = v[0];

    for (int i = 1; i < n; i++) {
        if (v[i] > may) may = v[i];
        if (v[i] < men) men = v[i];
    }

    cout << "Diferencia = " << may - men << endl;

    return 0;
}
