#include <iostream>
using namespace std;


bool esPrimo(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}


int factorial(int n) {
    if (n < 0) return 0;
    int resultado = 1;
    for (int i = 2; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}


int contarDigitos(int n) {
    if (n == 0) return 1;
    int contador = 0;
    n = (n < 0) ? -n : n; 
    while (n > 0) {
        n = n / 10;
        contador++;
    }
    return contador;
}


int sumarDigitos(int n) {
    int suma = 0;
    n = (n < 0) ? -n : n; 
    while (n > 0) {
        suma += n % 10;
        n = n / 10;
    }
    return suma;
}

int main() {
    int opcion = 0;
    int numero;

    while (opcion != 5) {
        cout << "1. Verificar si un numero es primo\n";
        cout << "2. Calcular el factorial de un numero\n";
        cout << "3. Contar cuantos digitos tiene un numero\n";
        cout << "4. Sumar los digitos de un numero\n";
        cout << "5. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        if (opcion >= 1 && opcion <= 4) {
            cout << "Ingrese un numero: ";
            cin >> numero;
        }

        switch (opcion) {
            case 1:
                if (esPrimo(numero))
                    cout << numero << " es primo.\n";
                else
                    cout << numero << " no es primo.\n";
                break;
            case 2:
                cout << "Factorial: " << factorial(numero) << endl;
                break;
            case 3:
                cout << "Cantidad de digitos: " << contarDigitos(numero) << endl;
                break;
            case 4:
                cout << "Suma de digitos: " << sumarDigitos(numero) << endl;
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
