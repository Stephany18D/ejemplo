#include <iostream>
using namespace std;

int ejercicio5() {
    int tamano = 0;
    int i = 0;
    int espacios = 0;
    int asteriscos = 0;

    cout << "Ingrese un numero impar para el tamaño del patrun: ";
    cin >> tamano;

    while (tamano % 2 == 0) {
        cout << "Por favor ingrese un numero impar: ";
        cin >> tamano;
    }

    for (i = 1; i <= tamano; i += 2) {
        espacios = (tamano - i) / 2;
        asteriscos = i;
        for (int j = 0; j < espacios; j++) {
            cout << " ";
        }
        for (int j = 0; j < asteriscos; j++) {
            cout << "*";
        }
        cout << "\n";
    }

    for (i = tamano - 2; i > 0; i -= 2) {
        espacios = (tamano - i) / 2;
        asteriscos = i;
        for (int j = 0; j < espacios; j++) {
            cout << " ";
        }
        for (int j = 0; j < asteriscos; j++) {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}


