// Ejercicio 75 - Mayor producto de dos elementos
#include <iostream>
using namespace std;

int main() {
    int v[100];
    int n;

    cout << "Ingrese N: ";
    cin >> n;

    cout << "Ingrese los elementos: ";
    for (int i = 0; i < n; i++) cin >> v[i];

    // los dos mas grandes y los dos mas chicos
    int may1 = v[0], may2 = v[1];
    if (may2 > may1) {
        int t = may1;
        may1 = may2;
        may2 = t;
    }
    int men1 = may2, men2 = may1;

    for (int i = 2; i < n; i++) {
        if (v[i] > may1) {
            may2 = may1;
            may1 = v[i];
        } else if (v[i] > may2) {
            may2 = v[i];
        }

        if (v[i] < men1) {
            men2 = men1;
            men1 = v[i];
        } else if (v[i] < men2) {
            men2 = v[i];
        }
    }

    int pMay = may1 * may2;
    int pMen = men1 * men2;

    if (pMay >= pMen) {
        cout << "Mayor producto = " << pMay;
        cout << " (" << may2 << " * " << may1 << ")" << endl;
    } else {
        cout << "Mayor producto = " << pMen;
        cout << " (" << men1 << " * " << men2 << ")" << endl;
    }

    return 0;
}
