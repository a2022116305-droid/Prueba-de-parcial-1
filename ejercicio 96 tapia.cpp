#include <iostream>
using namespace std;

int main() {
    int v[100];
    int n;
    int s;
    int suma;
    int largo;
    int menorLargo = 0;

    cout << "Ingrese N: ";
    cin >> n;
    cout << "Ingrese S: ";
    cin >> s;

    cout << "Ingrese los elementos: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for (int i = 0; i < n; i++) {
        suma = 0;

        for (int j = i; j < n; j++) {
            suma = suma + v[j];
            largo = j - i + 1;

            if (suma >= s) {
                if (menorLargo == 0 || largo < menorLargo) {
                    menorLargo = largo;
                }
            }
        }
    }

    if (menorLargo == 0) {
        cout << "No existe un subarreglo con esa suma" << endl;
    } else {
        cout << "Longitud minima = " << menorLargo << endl;
    }

    return 0;
}
