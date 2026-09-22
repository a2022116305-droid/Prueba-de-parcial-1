#include <iostream>
using namespace std;

int main() {
    int a[100];
    int b[100];
    int n;
    int producto = 0;

    cout << "Ingrese N: ";
    cin >> n;

    cout << "Elementos de A: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Elementos de B: ";
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    for (int i = 0; i < n; i++) {
        producto = producto + a[i] * b[i];
    }

    cout << "Producto escalar = " << producto << endl;

    return 0;
}
