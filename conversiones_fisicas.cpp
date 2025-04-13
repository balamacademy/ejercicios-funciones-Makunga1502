#include <iostream>
using namespace std;


float celsiusAFahrenheit(float c) {
    return (c * 9 / 5) + 32;
}

float fahrenheitACelsius(float f) {
    return (f - 32) * 5 / 9;
}

float metrosAPies(float m) {
    return m * 3.28084;
}

float kilogramosALibras(float kg) {
    return kg * 2.20462;
}

int main() {
    int opcion = 0;
    float valor;

    
    while (opcion != 5) {
        cout << "1. Celsius a Fahrenheit\n";
        cout << "2. Fahrenheit a Celsius\n";
        cout << "3. Metros a Pies\n";
        cout << "4. Kilogramos a Libras\n";
        cout << "5. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch(opcion) {
            case 1:
                cout << "Ingrese grados Celsius: ";
                cin >> valor;
                cout << "Resultado: " << celsiusAFahrenheit(valor) << " F\n";
                break;
            case 2:
                cout << "Ingrese grados Fahrenheit: ";
                cin >> valor;
                cout << "Resultado: " << fahrenheitACelsius(valor) << " C\n";
                break;
            case 3:
                cout << "Ingrese metros: ";
                cin >> valor;
                cout << "Resultado: " << metrosAPies(valor) << " pies\n";
                break;
            case 4:
                cout << "Ingrese kilogramos: ";
                cin >> valor;
                cout << "Resultado: " << kilogramosALibras(valor) << " libras\n";
                break;
            case 5:
                cout << "Saliendo.\n";
                break;
            default:
                cout << "Opcion invalida. Intente de nuevo.\n";
        }
    }

    return 0;
}
