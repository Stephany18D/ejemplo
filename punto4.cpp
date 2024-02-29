#include <iostream>
using namespace std;

int Ejercicio4() {
    int hora, duracion, horas, minutos;
    cout << "Ingrese la hora en formato de 24 horas: ";
    cin >> hora;
    cout << "Ingrese la duración en horas y minutos: ";
    cin >> duracion;

    horas = duracion / 100; // Obtener las horas de la duración
    minutos = duracion % 100; // Obtener los minutos de la duración

    int horas_total = hora / 100 + horas;
    int minutos_total = hora % 100 + minutos;

    if (minutos_total >= 60) {
        horas_total += minutos_total / 60;
        minutos_total %= 60;
    }

    horas_total %= 24; // Asegurar que la hora se encuentre en el rango de 0-23

    if (hora >= 0 && hora <= 2359 && duracion >= 0) {
        cout << "La hora es ";
        if (horas_total < 10) cout << "0";
        cout << horas_total << minutos_total << "." << endl;
    } else {
        cout << hora << " es un tiempo inválido." << endl;
    }

    return 0;
}
