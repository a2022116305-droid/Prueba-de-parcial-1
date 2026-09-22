#include <iostream>
using namespace std;

int main() {
    int v[100];
    int n;
    int producto;
    int mayorProducto;
    int pos1 = 0;
    int pos2 = 1;
    int pos3 = 2;

    cout << "Ingrese N: ";
    cin >> n;

    cout << "Ingrese los elementos: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    mayorProducto = v[0] * v[1] * v[2];

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                producto = v[i] * v[j] * v[k];

                if (producto > mayorProducto) {
                    mayorProducto = producto;
                    pos1 = i;
                    pos2 = j;
                    pos3 = k;
                }
            }
        }
    }

    cout << "Mayor producto = " << mayorProducto;
    cout << " (" << v[pos1] << " * " << v[pos2] << " * " << v[pos3] << ")" << endl;

    return 0;
}
