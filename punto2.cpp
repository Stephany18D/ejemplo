#include <iostream>
using namespace std;

int Ejercicio2() {
    // Definir las denominaciones de billetes y monedas
    int denominaciones[] = {50000, 20000, 10000, 5000, 2000, 1000, 500, 200, 100, 50};

    int cantidad;
    cout << "Ingrese la cantidad de dinero: ";
    cin >> cantidad;

    cout << "Desglose de billetes y monedas:" << endl;

    // Recorrer las denominaciones
    for (int i = 0; i < 10; i++) {
        int billetes = cantidad / denominaciones[i];
        if (billetes > 0) {
            cout << denominaciones[i] << " : " << billetes << endl;
            cantidad %= denominaciones[i];
        }
    }

    if (cantidad > 0) {
        cout << "Faltante: " << cantidad << "." << endl;
    }

    return 0;
}
