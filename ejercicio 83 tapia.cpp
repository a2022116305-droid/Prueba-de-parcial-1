#include <iostream>
using namespace std;

void acomodarHeap(int v[], int n, int i) {
    int mayor = i;
    int izquierdo = 2 * i + 1;
    int derecho = 2 * i + 2;
    int auxiliar;

    if (izquierdo < n && v[izquierdo] > v[mayor]) {
        mayor = izquierdo;
    }

    if (derecho < n && v[derecho] > v[mayor]) {
        mayor = derecho;
    }

    if (mayor != i) {
        auxiliar = v[i];
        v[i] = v[mayor];
        v[mayor] = auxiliar;

        acomodarHeap(v, n, mayor);
    }
}

int main() {
    int v[100];
    int n;
    int auxiliar;

    cout << "Ingrese N: ";
    cin >> n;

    cout << "Ingrese los elementos: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for (int i = n / 2 - 1; i >= 0; i--) {
        acomodarHeap(v, n, i);
    }

    for (int i = n - 1; i > 0; i--) {
        auxiliar = v[0];
        v[0] = v[i];
        v[i] = auxiliar;

        acomodarHeap(v, i, 0);
    }

    cout << "Ordenado: ";
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
