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

int main() {

    int n, fac;
    cout << "Ingrese un numero ";
    cin >> n;
    fac = factorial(n);
    cout << "\nFactorial de " << n << ": " << fac;


    return 0;
}
