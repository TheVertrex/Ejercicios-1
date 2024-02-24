#include <iostream>
using namespace std;
int main() {

    cout << "Ingrese su edad: ";
    int edad;
    cin >> edad;


    if (edad >= 18) {
        cout << "¡Eres mayor de edad!" << endl;
    } else {
        cout << "Eres menor de edad." << endl;
    }

    return 0;
}
