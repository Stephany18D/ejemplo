#include <iostream>

using namespace std;

// Define la función factorial para calcular el factorial de un número
double calcularFactorial(int n) {
    double resultado = 1;
    for(int i = 1; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

// Función principal para ejecutar el ejercicio
int ejercicio6() {
    int n;
    cout << "Introduce el numero de elementos usados en la aproximacion: ";
    cin >> n;

    double e = 0;

    // Calcula 'e' aproximadamente utilizando la serie de Taylor
    for(int i = 0; i < n; i++) {
        e += 1 / calcularFactorial(i);
    }

    // Muestra el resultado de 'e' aproximado
    cout << "e es aproximadamente: " << e << endl;

    return 0;
}
