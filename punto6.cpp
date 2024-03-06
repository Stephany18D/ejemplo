#include <iostream>

using namespace std;

double calcularFactorial(int n) {
    double resultado = 1;
    for(int i = 1; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

int ejercicio6() {
    int n;
    cout << "Introduce el numero de elementos usados en la aproximacion: ";
    cin >> n;

    double e = 0;

    for(int i = 0; i < n; i++) {
        e += 1 / calcularFactorial(i);
    }

    cout << "e es aproximadamente: " << e << endl;

    return 0;
}
