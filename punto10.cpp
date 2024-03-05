#include <iostream>

int ejercicio10() {
    int n;
    int primo = 2;
    int contador = 1;

    std::cout << "Ingrese un numero n: ";
    std::cin >> n;

    while (contador <= n) {
        bool esPrimo = true;

        for (int i = 2; i < primo; i++) {
            if (primo % i == 0) {
                esPrimo = false;
                break;
            }
        }

        if (esPrimo) {
            if (contador == n) {
                break;
            }
            contador++;
        }

        primo++;
    }

    std::cout << "El primo numero " << n << " es: " << primo << std::endl;

    return 0;
}

