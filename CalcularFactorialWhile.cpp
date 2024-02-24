#include <iostream>
using namespace std;
int main() {

    cout << "Ingrese un numero: ";
    int numero;
    cin >> numero;

    if (numero < 0) {
        cout << "El factorial no está definido para numeros negativos." << endl;
        return 1;
    }

    long long factorial = 1;
    int i = 1;

    while (i <= numero) {
        factorial *= i;
        i++;
    }

    cout << "El factorial de " << numero << " es: " << factorial << endl;

    return 0;
}
