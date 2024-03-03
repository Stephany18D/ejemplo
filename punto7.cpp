#include <iostream>

using namespace std;

int ejercicio7() {
  int n, a = 0, b = 1, suma = 0;

  cout << "Ingrese un número: ";
  cin >> n;

  while (b < n) {
    if (b % 2 == 0) {
      suma += b;
    }
    int c = a + b;
    a = b;
    b = c;
  }

  cout << "El resultado de la suma es: " << suma << endl;

  return 0;
}
