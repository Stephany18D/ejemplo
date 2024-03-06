#include <iostream>
using namespace std;
int mcm(int a, int b) {
    int max = (a > b) ? a : b;
    while (true) {
        if (max % a == 0 && max % b == 0) {
            return max;
        }
        max++;
    }
}

int ejercicio11() {
    int numero;
    int resultado = 1;

    cout << "Ingrese un numero: ";
    cin >> numero;

    for (int i = 1; i <= numero; i++) {
        resultado = mcm(resultado, i);
    }

    cout << "El minimo comun multiplo es: " << resultado << std::endl;

    return 0;
}
