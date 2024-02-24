#include <iostream>
using namespace std;
int main() {

    cout << "Ingrese un numero entero: ";
    int numero;
    cin >> numero;

    if (numero % 2 == 0) {
        cout << "El numero ingresado (" << numero << ") es par." << endl;
    } else {
        cout << "El numero ingresado (" << numero << ") es impar." << endl;
    }

    return 0;
}
