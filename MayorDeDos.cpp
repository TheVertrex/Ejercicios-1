#include <iostream>
using namespace std;
int main() {
    cout << "Ingrese el primer numero: ";
    double numero1;
    cin >> numero1;

    cout << "Ingrese el segundo numero: ";
    double numero2;
    cin >> numero2;

    if (numero1 > numero2) {
        cout << "El primer numero (" << numero1 << ") es mayor." << endl;
    } else if (numero2 > numero1) {
        cout << "El segundo numero (" << numero2 << ") es mayor." << endl;
    } else {
        cout << "Ambos numeros son iguales." << endl;
    }

    return 0;
}