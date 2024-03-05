#include <iostream>

bool esPrimo(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int ejercicio13() {
    int numero;
    std::cout << "Ingrese un numero: ";
    std::cin >> numero;

    int suma = 0;
    for (int i = 2; i < numero; i++) {
        if (esPrimo(i)) {
            suma += i;
        }
    }

    std::cout << "El resultado de la suma es: " << suma << std::endl;

    return 0;
}
