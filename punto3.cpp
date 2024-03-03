#include <iostream>

using namespace std;

int ejercicio3() {
  int dia, mes;

  cout << "Ingrese el dia: ";
  cin >> dia;

  cout << "Ingrese el mes: ";
  cin >> mes;

  if (mes < 1 || mes > 12) {
    cout << mes << " es un mes invalido." << endl;
    return 1;
  }

  if (dia < 1) {
    cout << dia << " es un dia invalido." << endl;
    return 1;
  }

  if (mes == 2) {
    if (dia > 29) {
      cout << dia << "/" << mes << " es una fecha invalida." << endl;
      return 1;
    } else if (dia == 29) {
      cout << dia << "/" << mes << " es valida en año bisiesto." << endl;
      return 0;
    }
  } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
    if (dia > 30) {
      cout << dia << "/" << mes << " es una fecha invalida." << endl;
      return 1;
    }
  }

  cout << dia << "/" << mes << " es una fecha valida." << endl;

  return 0;
}

