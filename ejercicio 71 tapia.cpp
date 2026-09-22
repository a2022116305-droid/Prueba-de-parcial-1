// Ejercicio 71 - Maxima suma circular
#include <iostream>
using namespace std;

int main() {
    int v[100];
    int n;

    cout << "Ingrese N: ";
    cin >> n;

    cout << "Ingrese los elementos: ";
    for (int i = 0; i < n; i++) cin >> v[i];

    int total = v[0];
    int maxAct = v[0], maxTot = v[0];
    int minAct = v[0], minTot = v[0];

    for (int i = 1; i < n; i++) {
        total += v[i];

        if (maxAct + v[i] > v[i]) maxAct = maxAct + v[i];
        else maxAct = v[i];
        if (maxAct > maxTot) maxTot = maxAct;

        if (minAct + v[i] < v[i]) minAct = minAct + v[i];
        else minAct = v[i];
        if (minAct < minTot) minTot = minAct;
    }

    int resultado;
    if (maxTot < 0) {
        // todos negativos, la vuelta circular no sirve
        resultado = maxTot;
    } else if (total - minTot > maxTot) {
        resultado = total - minTot;
    } else {
        resultado = maxTot;
    }

    cout << "Suma maxima circular = " << resultado << endl;

    return 0;
}
