#include <iostream>

using namespace std;

int factorial(int n) {
    int indice;
    if (n == 0 || n == 1) {
        return 1;
    }
    else {
        return n * factorial(n - 1);
    }
}

void cajero(double& cuenta) {
    char continuar = 's';
    while (continuar == 's') {
        int opc;
        cout << "\nIngrese una opcion: ";
        cin >> opc;
        float retirar;
        switch (opc) {
        case 1:
            cout << "Saldo: " << cuenta;
            break;
        case 2:
            cout << "Ingrese la cantidad a retirar: ";
            cin >> retirar;
            cuenta -= retirar;
            break;
        case 3:
            cout << "Saldo despues del retiro: " << cuenta;
            break;

        }
        cout << "\nDesea continuar? (s/n)";
        cin >> continuar;
    }
}

int main() {

    int n, fac;
    double cuenta = 20000.00;
    cout << "Ingrese un numero ";
    cin >> n;
    fac = factorial(n);
    cout << "\nFactorial de " << n << ": " << fac;

    cout << "\nMenu:" << endl << "1. Consultar saldo" << endl << "2. Retirar efectivo" << endl << "3. Mostrar saldo despues del retiro";
    cajero(cuenta);

    return 0;
}






