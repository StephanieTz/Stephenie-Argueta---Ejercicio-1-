#include <iostream> // Incluye la biblioteca para entrada/salida estándar
#include <locale.h> // Incluye la biblioteca para manejar locales (idiomas)
#include <cmath>    // Incluye la biblioteca para funciones matemáticas
#include <conio.h>  // Incluye la biblioteca para funciones de consola en sistemas Windows

using namespace std;

// Funciones
int opyvar();
int calcularPotencia();
bool esPrimo();
int esBisiesto();

int main()
{
    setlocale(LC_ALL, "Spanish"); // Establecer el locale a español
    int dust;

    do
    {
        // 5. menú de opciones
        cout << "--------------------- Ejercicios Laboratorio III ---------------------" << endl;
        cout << "1) Operadores y variables" << endl;
        cout << "2) Funciones" << endl;
        cout << "3) Determinar numeros primos" << endl;
        cout << "4) Anio Bisiesto" << endl;
        cout << "\nEscoje el numero de ejercicio a realizar: ";
        cin >> dust;

        switch (dust)
        {
        case 1:
            opyvar();
            break;

        case 2:
            calcularPotencia();
            break;

        case 3:
            esPrimo();
            break;

        case 4:
            esBisiesto();
            break;

        default:
            cout << "Error\n"
                 << endl;
            break;
        }
    } while (dust != 6); // Repite el bucle hasta que el usuario elija la opción 6

    system("pause");
    return 0;
}

// 1. Operaciones y Variables
int opyvar()
{
    int num1, num2;
    char op;

    cout << "\n1) Operadores y variables" << endl;

    cout << "Ingrese 2 numeros: ";
    cin >> num1 >> num2;

    cout << "Que operacion deseas realizar? suma(+), resta(-), division(/), multiplicacion(*)" << endl;
    cin >> op;

    switch (op)
    {
    case '+':
        cout << "Resultado: " << num1 + num2 << endl;
        break;

    case '-':
        cout << "Resultado: " << num1 - num2 << endl;
        break;

    case '*':
        cout << "Resultado: " << num1 * num2 << endl;
        break;

    case '/':
        if (num2 != 0)
            cout << "Resultado: " << num1 / num2 << endl;
        else
            cout << "Error: no se puede dividir por 0" << endl; // Verifica que el segundo valor no sea cero para evitar una división por cero
        break;

    default:
        cout << "Operacion no valida" << endl;
    }
    return 0;
}

// 2. Funciones
int calcularPotencia()
{
    int potencia, base;

    cout << "Programa que encuentra un valor exponencial\n";
    cout << "---------------------------------------------\n";

    cout << "Escriba una base: ";
    cin >> base;

    cout << "Escriba una potencia: ";
    cin >> potencia;

    int resultado = 1; // Inicia el resultado con el valor 1

    if (potencia >= 0) // Verifica si la potencia es mayor o igual a cero
    {
        for (int count = 1; count <= potencia; ++count) // Se ejecuta el bucle, las veces que se haya ingresado en potencia
        {
            resultado *= base; // * por cada iteración
        }

        cout << "El valor exponencial es: " << resultado << endl;
    }
    else
    {
        cout << "No se puede calcular para exponentes negativos." << endl;
    }

    return 0;
}

// 3. Determinar números Primos
bool esPrimo()
{
    int idv;
    bool primo = true; // Inicialización de la variable primo como verdadero

    cout << "Ingrese un numero entero positivo: ";
    cin >> idv;

    if (idv <= 1) // Verifica si el número es menor o igual a 1
    {
        primo = false; // Si es menor o igual a 1, no es primo
    }
    else
    {
        for (int cinnamon = 2; cinnamon <= idv / 2; ++cinnamon) // Bucle para verificar si el número es divisible por algún número menor o igual a la mitad de idv
        {
            if (idv % cinnamon == 0) // Si idv es divisible por cinnamon sin dejar residuo, no es primo
            {
                primo = false;
                break; // Sale del bucle
            }
        }
    }

    if (primo)
        cout << idv << " es un numero primo" << endl;
    else
        cout << idv << " no es un numero primo" << endl;

    return primo;
}

// 4. Año bisiesto
int esBisiesto()
{
    int anio;
    cout << "Ejercicio 4)\nCrea un programa que determine si un anio ingresado es bisiesto o no." << endl;

    cout << "Introduce anio: ";
    cin >> anio;

    if (anio % 4 == 0 and anio % 100 != 0 or anio % 400 == 0)
    {
        cout << "\nEste anio es bisiesto.\n\n"
             << endl;
    }
    else
    {
        cout << "\nEste anio no es bisiesto.\n\n"
             << endl;
    }
    return 0;
}
