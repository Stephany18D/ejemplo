#include <iostream>
using namespace std;
int ejercicio12() {
    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;

    int factorPrimo = 2;

    while (numero > 1) {
        if (numero % factorPrimo == 0) {
            numero /= factorPrimo;
        } else {
            factorPrimo++;
        }
    }

    cout << "El mayor factor primo de " << numero << " es: " << factorPrimo  << std::endl;

    return 0;
}
