/*
1. Declara una constante int llamada MAX_NOTAS con el valor
100.
2. Declara una constante float llamada PI utilizando const y
asígnale el valor 3.14159.
3. Declara una constante char llamada SEPARADOR y asígnale
el carácter '-’.
4. Declara una constante bool llamada ES_ADMIN y asígnale
true.
5. Usa #define para declarar una constante SALUDO con el
valor "Hola Mundo".
6. Crea un programa que calcule el área de un círculo usando
una constante PI.
*/

#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(65001);

    const int MAX_NOTAS = 100;
    cout << "Mis notas son de: " <<MAX_NOTAS << endl;

    const float PI = 3.14159f;
    cout << "Valor de PI: " << PI << endl;

    const char SEPARADOR = '-';
    cout << "Separador: " << SEPARADOR << endl;

    const bool ES_ADMIN = true;
    cout << "Es admin: " << ES_ADMIN << endl;

    #define SALUDO "Hola Mundo"
    cout << SALUDO << endl;

    float radio = 0.00f, area = 0.00f;
    cout << "Ingrese el radio del círculo en centímetros: ";
    cin >> radio;
    area = PI * radio * radio;
    cout << "El área del círculo es: " << area << "cm" <<endl;

    return 0;
}