#include <iostream>

using namespace std;

int ejercicio8() {
  int a, b, c, suma = 0;

  cout << "Ingrese a: ";
  cin >> a;

  cout << "Ingrese b: ";
  cin >> b;

  cout << "Ingrese c: ";
  cin >> c;


  for (int i = a; i < c; i += a) {
    suma += i;
  }


  for (int i = b; i < c; i += b) {
    if (i % a != 0) {
      suma += i;
    }
  }

  cout << "La suma es: " << suma << endl;

  return 0;
}
