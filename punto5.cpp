#include <iostream>

using namespace std;

int ejercicio5() {
  int n, i, j, espacios;

  cout << "Ingrese un número entero impar: ";
  cin >> n;

  if (n % 2 == 0) {
    cout << "El número debe ser impar." << endl;
    return 1;
  }

  espacios = n / 2;

  for (i = 1; i <= n; i += 2) {
    for (j = 1; j <= espacios; j++) {
      cout << " ";
    }
    for (j = 1; j <= i; j++) {
      cout << "*";
    }
    cout << endl;
    espacios--;
  }

  espacios = 1;

  for (i = n - 2; i >= 1; i -= 2) {
    for (j = 1; j <= espacios; j++) {
      cout << " ";
    }
    for (j = 1; j <= i; j++) {
      cout << "*";
    }
    cout << endl;
    espacios++;
  }

  return 0;
}


