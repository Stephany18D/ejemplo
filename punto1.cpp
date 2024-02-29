#include <iostream>
using namespace std;

int ejercicio1() {
    char caracter;
    cout << "Ingresa un caracter: ";
    cin >> caracter;


    if (isalpha(caracter)) { // verifica si es una letra
        caracter = toupper(caracter);

        if (caracter == 'A' || caracter == 'E' || caracter == 'I' || caracter == 'O' || caracter == 'U') {// Verificar si es una vocal
            cout << caracter << " es una vocal." << endl;
        } else {
            cout << caracter << " es una consonante." << endl;
        }
    } else {
        cout << "No es una letra." << endl;
    }

    return 0;
}
