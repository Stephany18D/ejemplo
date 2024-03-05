#include <iostream>

int ejercicio12() {
    int numero;
    std::cout << "Ingrese un numero: ";
    std::cin >> numero;

    int factorPrimo = 2;

    while (numero > 1) {
        if (numero % factorPrimo == 0) {
            numero /= factorPrimo;
        } else {
            factorPrimo++;
        }
    }

    std::cout << "El mayor factor primo de " << numero << " es: " << factorPrimo  << std::endl;

    return 0;
}
