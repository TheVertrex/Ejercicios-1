#include <iostream>
using namespace std;
void MayorDeEdad();
void MayorDeDos();
void NumeroParOImpar();
void CalcularFactorialWhile();
void NumerosImparesFor();
void NombreDelDiaSwitch();
void NumerosImparesWhile();

int main() {
    int opcion;


    cout << "Seleccione un ejercicio:" << endl;
    cout << "1. Determinar si un numero es mayor de edad." << endl;
    cout << "2. Determinar el mayor de dos numeros." << endl;
    cout << "3. Determinar si un numero es par o impar." << endl;
    cout << "4. Calcular el factorial de un numero." << endl;
    cout << "5. Mostrar numeros impares hasta un número dado For." << endl;
    cout << "6. Determinar el día de la semana según un numero del 1 al 5." << endl;
    cout << "7. Mostrar numeros impares hasta un numero dado While." << endl;


    std::cout << "Ingrese el número del ejercicio que desea ejecutar: ";
    std::cin >> opcion;

    switch (opcion) {
        case 1:
            MayorDeEdad();
            break;
        case 2:
            MayorDeDos();
            break;
        case 3:
            NumeroParOImpar();
            break;
        case 4:
            CalcularFactorialWhile();
            break;
        case 5:
            NumerosImparesFor();
            break;
        case 6:
            NombreDelDiaSwitch();
            break;
        case 7:
            NumerosImparesWhile();
            break;
        default:
            cout << "Opcion no valida" << endl;
    }

    return 0;
}

void MayorDeEdad() {
}

void MayorDeDos() {
}

void NumeroParOImpar() {
}

void CalcularFactorialWhile() {
}

void NumerosImparesFor() {
}

void NombreDelDiaSwitch() {
}

void NumerosImparesWhile() {
}
