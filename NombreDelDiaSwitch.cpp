#include <iostream>
using namespace std;
int main() {

    int numero;

    cout << "Ingrese un numero del 1 al 5: ";
    cin >> numero;

    switch (numero) {
        case 1:
            cout << "Lunes" << endl;
            break;
        case 2:
            cout << "Martes" << endl;
            break;
        case 3:
            cout << "Miercoles" << endl;
            break;
        case 4:
            cout << "Jueves" << endl;
            break;
        case 5:
            cout << "Viernes" << endl;
            break;
        default:
            cout << "Numero no valido. Debe ser del 1 al 5." << endl;
    }

    return 0;
}
