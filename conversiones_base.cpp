#include <iostream>
using namespace std;


void decimalABinario(int n) {
    if (n < 2) {
        cout << n;
    } else {
        decimalABinario(n / 2);
        cout << n % 2;
    }
}


void decimalAOctal(int n) {
    if (n < 8) {
        cout << n;
    } else {
        decimalAOctal(n / 8);
        cout << n % 8;
    }
}


void decimalAHexadecimal(int n) {
    if (n < 16) {
        if (n < 10)
            cout << n;
        else
            cout << char('A' + (n - 10));
    } else {
        decimalAHexadecimal(n / 16);
        int digito = n % 16;
        if (digito < 10)
            cout << digito;
        else
            cout << char('A' + (digito - 10));
    }
}

int main() {
    int opcion = 0;
    int numero;

    while (opcion != 4) {
        cout << "1. Decimal a Binario\n";
        cout << "2. Decimal a Octal\n";
        cout << "3. Decimal a Hexadecimal\n";
        cout << "4. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        if (opcion >= 1 && opcion <= 3) {
            cout << "Ingrese un numero decimal: ";
            cin >> numero;

            if (numero < 0) {
                cout << "No se permiten negativos.\n";
                continue;
            }

            cout << "Resultado: ";
        }

        switch (opcion) {
            case 1:
                decimalABinario(numero);
                cout << "\n";
                break;
            case 2:
                decimalAOctal(numero);
                cout << "\n";
                break;
            case 3:
                decimalAHexadecimal(numero);
                cout << "\n";
                break;
            case 4:
                cout << "Saliendo.\n";
                break;
            default:
                cout << "Opcion invalida. Intente de nuevo.\n";
        }
    }

    return 0;
}
