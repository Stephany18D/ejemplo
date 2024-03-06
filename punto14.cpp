#include <iostream>
using namespace std;

bool esPalindromo(int num) {
    int original = num;
    int invertido = 0;

    while(original > 0) {
        invertido = invertido * 10 + original % 10;
        original = original / 10;
    }

    return num == invertido;
}

int ejercicio14() {
    int mayorPalindromo = 0;
    int factor1 = 0, factor2 = 0;

    for (int i = 100; i < 1000; i++) {
        for (int j = 100; j < 1000; j++) {
            int producto = i * j;
            if (esPalindromo(producto) && producto > mayorPalindromo) {
                mayorPalindromo = producto;
                factor1 = i;
                factor2 = j;
            }
        }
    }

    cout << factor1 << " * " << factor2 << " = " << mayorPalindromo << endl;

    return 0;
}
