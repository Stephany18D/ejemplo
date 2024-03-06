#include <iostream>
using namespace std;
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
    cout << "Ingrese un numero: ";
    cin >> numero;

    int suma = 0;
    for (int i = 2; i < numero; i++) {
        if (esPrimo(i)) {
            suma += i;
        }
    }

    cout << "El resultado de la suma es: " << suma << std::endl;

    return 0;
}

