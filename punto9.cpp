#include <iostream>
#include <cmath>
using namespace std;

int ejercicio9() {
    int N, suma = 0;

    cout << "Ingrese un numero entero: ";
    cin >> N;

    while (N > 0) {
        suma += pow(N % 10, N % 10);
        N /= 10;
    }

    cout << "El resultado de la suma es: " << suma << endl;

    return 0;
}
