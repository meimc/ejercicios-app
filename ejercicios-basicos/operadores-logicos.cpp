/* 
Escribe un programa que solicite dos edades y muestre si tienen la misma edad o cuál es mayor.
Solicita un valor booleano y muestra el valor contrario.
Solicita dos números enteros, si ambos números son positivos muestra: “Ambos son positivos”. Si al menos uno es negativo muestra: “Al menos uno es negativo”.
Declara una variable x con un valor ingresado por teclado. Luego, aumenta su valor en 5 usando el operador de asignación y muéstralo.
*/

#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int edad1, edad2;
    cout << "¿Cuántos años tiene la primer persona?: ";
    cin >> edad1;
    cout << "¿Cuántos años tiene la primer persona?:  ";
    cin >> edad2;
    while (edad1 < 0 || edad2 < 0) {
        cout << "Las edades no pueden ser negativas." << endl;
        if (edad1 < 0) {
             cout << "¿Cuántos años tiene la primer persona?: ";
             cin >> edad1;
        }
        else {
             cout << "¿Cuántos años tiene la segunda persona?: ";
             cin >> edad2;
        }
    }
    cout << ((edad1 == edad2) ? "Tienen la misma edad." : (edad1 > edad2 ? "La primer persona es mayor." : "La segunda persona es mayor.")) << endl;

    bool valorBool;
    cout << "Ingrese un valor: 0 para falso, 1 para verdadero: ";
    cin >> valorBool;
    cout << "El valor contrario es: " << !valorBool << endl;

    int numero1, numero2;
    cout << "Ingrese el primer número entero: ";
    cin >> numero1;
    cout << "Ingrese el segundo número entero: ";
    cin >> numero2;

    cout << ((numero1 >= 0 && numero2 >= 0) ? "Ambos son positivos." : "Al menos uno es negativo.") << endl;

    int variableX;
    cout << "Ingrese un valor para x: ";
    cin >> variableX;
    variableX += 5;
    cout << "El nuevo valor de x es: " << variableX << endl;

    return 0;
}