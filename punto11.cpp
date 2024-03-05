#include <iostream>

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

    std::cout << "Ingrese un numero: ";
    std::cin >> numero;

    for (int i = 1; i <= numero; i++) {
        resultado = mcm(resultado, i);
    }

    std::cout << "El minimo comun multiplo es: " << resultado << std::endl;

    return 0;
}
