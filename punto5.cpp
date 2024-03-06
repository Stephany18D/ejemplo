#include <iostream>

int ejercicio5() {
    int tamano = 0;
    int i = 0;
    int espacios = 0;
    int asteriscos = 0;

    std::cout << "Ingrese un numero impar para el tamaño del patrun: ";
    std::cin >> tamano;

    while (tamano % 2 == 0) {
        std::cout << "Por favor ingrese un numero impar: ";
        std::cin >> tamano;
    }

    for (i = 1; i <= tamano; i += 2) {
        espacios = (tamano - i) / 2;
        asteriscos = i;
        for (int j = 0; j < espacios; j++) {
            std::cout << " ";
        }
        for (int j = 0; j < asteriscos; j++) {
            std::cout << "*";
        }
        std::cout << "\n";
    }

    for (i = tamano - 2; i > 0; i -= 2) {
        espacios = (tamano - i) / 2;
        asteriscos = i;
        for (int j = 0; j < espacios; j++) {
            std::cout << " ";
        }
        for (int j = 0; j < asteriscos; j++) {
            std::cout << "*";
        }
        std::cout << "\n";
    }

    return 0;
}


