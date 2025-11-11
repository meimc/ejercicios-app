// Declara una variable de tipo int llamada edad y asignale tu edad.
// Declara una variable de tipo float llamada precio y asignale el valor 17.99.
// Declara una variable de tipo char llamada genero y asignale la letra F.
// Declara una variable de tipo double llamada distancia y asignale el valor 12345.6789.
// Declara una variable de tipo bool llamado esGraduado y asignale false.
// Crea un programa que multiplique una variable float por una variable double y miestra el resultado.
// Crea un programa que cambie el valor de una variable bool y muestra el nuevo valor.
// Crea un programa que concatene dos variables char y muestre el resultado
// Crea un programa que compare dos variables int y muestre cuál es mayor.
// Intenta asignar un valor fuera del rango permitido para una variable int y observa qué sucede.

#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(65001);

    // ejercicio 1
    int edad = 32;
    cout << "Tengo " << edad << " años" << endl;

    // ejercicio 2
    float precio = 17.99f;
    cout << "El precio es " << precio << endl;

    // ejercicio 3
    char genero = 'F';
    cout << "El género es " << genero << endl;

    // ejercicio 4
    double distancia = 12345.6789;
    cout << "La distancia es " << distancia << endl;

    // ejercicio 5
    bool esGraduado = false;
    cout << "Es graduado: " << esGraduado << endl;

    // ejercicio 6
    float numFloat = 0.00f;
    double numDouble = 0.00, resultadoMultiplicacion = 0.00;
    cout << "Ingrese un numero decimal: ";
    cin >> numFloat;
    cout << "Ingrese otro numero decimal mas largo: ";
    cin >> numDouble;
    resultadoMultiplicacion = numFloat * numDouble;
    cout << "Resultado de la multiplicacion: " << resultadoMultiplicacion << endl;

    // ejercicio 7
    bool valorBool = false;
    cout << "Valor inicial del bool: " << valorBool << endl;
    valorBool = !valorBool;
    cout << "Nuevo valor del bool: " << valorBool << endl;

    // ejercicio 8
    char letra1='a', letra2='b';
    cout << "Ingrese una letra: ";
    cin >> letra1;
    cout << "Ingrese otra letra: ";
    cin >> letra2;
    string concatenacion = string(1, letra1) + string(1, letra2);
    cout << "Resultado de la concatenacion: " << concatenacion << endl;

    // ejercicio 9
    int numEntero1, numEntero2;
    cout << "Ingrese el primer numero entero: ";
    cin >> numEntero1;
    cout << "Ingrese el segundo numero entero: ";
    cin >> numEntero2;
    if (numEntero1 > numEntero2) {
        cout << numEntero1 << " es mayor que " << numEntero2 << endl;
    } else if (numEntero2 > numEntero1) {
        cout << numEntero2 << " es mayor que " << numEntero1 << endl;
    }

    // ejercicio 10
    int fueraDelRango = 2147483650; 
    cout << "Este numero esta fuera del rango: " << fueraDelRango << endl;


    return 0;
}

// Tipos de datos
// 1. int: para números enteros (sin decimales).
// 2. float: para números decimales de precisión simple.
// 3. double: para números decimales de precisión doble.
// 4. char: para un solo carácter.
// 5. bool: para valores booleanos (true o false).
// 6. string: para cadenas de texto.