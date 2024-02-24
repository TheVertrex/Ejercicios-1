#include <iostream>
using namespace std;
int main() {

    int numero;

    do {
        cout << "Ingrese un numero mayor a 10 y menor que 30: ";
        cin >> numero;

        if (numero <= 10 || numero >= 30) {
            cout << "El numero debe ser mayor a 10 y menor que 30. Intentelo nuevamente." << endl;
        }
    } while (numero <= 10 || numero >= 30);


    cout << "Numeros impares desde 1 hasta " << numero << ":" << endl;

    for (int i = 1; i <= numero; i += 2) {
        cout << i << " ";
    }

    cout << endl;

    return 0;
}
