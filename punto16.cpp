#include <iostream>
#include <vector>
using namespace std;

int calcularSerieCollatz(long long semilla) {
    int terminos = 1;
    while (semilla != 1) {
        if (semilla % 2 == 0) {
            semilla /= 2;
        } else {
            semilla = 3 * semilla + 1;
        }
        terminos++;
    }
    return terminos;
}

int ejercicio16() {
    long long k;
    cout << "Ingrese un numero k: ";
    cin >> k;

    long long semillaMasLarga = 0;
    int terminosMasLargos = 0;

    for (long long j = 1; j < k; j++) {
        int terminos = calcularSerieCollatz(j);
        if (terminos > terminosMasLargos) {
            terminosMasLargos = terminos;
            semillaMasLarga = j;
        }
    }

    cout << "La serie mas larga es con la semilla: " << semillaMasLarga << ", teniendo " << terminosMasLargos << " terminos.\n";

    return 0;
}
