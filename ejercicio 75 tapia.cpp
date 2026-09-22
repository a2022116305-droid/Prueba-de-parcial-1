#include <iostream>
using namespace std;

int main() {
    int v[100];
    int n;
    int producto;
    int mayorProducto;
    int pos1 = 0;
    int pos2 = 1;

    cout << "Ingrese N: ";
    cin >> n;

    cout << "Ingrese los elementos: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    mayorProducto = v[0] * v[1];

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            producto = v[i] * v[j];

            if (producto > mayorProducto) {
                mayorProducto = producto;
                pos1 = i;
                pos2 = j;
            }
        }
    }

    cout << "Mayor producto = " << mayorProducto;
    cout << " (" << v[pos1] << " * " << v[pos2] << ")" << endl;

    return 0;
}
