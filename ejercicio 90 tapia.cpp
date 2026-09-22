#include <iostream>
using namespace std;

int main() {
    int v[100];
    int n;
    int altura;
    int area;
    int mayorArea = 0;

    cout << "Ingrese N: ";
    cin >> n;

    cout << "Ingrese las alturas: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (v[i] < v[j]) {
                altura = v[i];
            } else {
                altura = v[j];
            }

            area = altura * (j - i);

            if (area > mayorArea) {
                mayorArea = area;
            }
        }
    }

    cout << "Area maxima = " << mayorArea << endl;

    return 0;
}
