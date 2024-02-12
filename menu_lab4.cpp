#include <iostream> // Incluye la biblioteca iostream para operaciones de entrada/salida
#include <cmath>    // Incluye la biblioteca cmath para operaciones matemáticas

using namespace std;

// Declaración de funciones
int realizarOperacion(int num1, int num2, char Cinnamon);
int imprimirResultado(int resultado);

int main()
{
    int cantidadOperaciones; // Declara una variable para la cantidad de operaciones

    cout << "Ingrese la cantidad de operaciones a realizar: ";
    cin >> cantidadOperaciones;

    for (int i = 0; i < cantidadOperaciones; ++i) // Este bucle se utiliza para realizar múltiples operaciones según la cantidad especificada por el usuario
    {                                             // i: Variable de control del bucle, incrementa en cada iteración hasta alcanzar "cantidadOperaciones"
        char Cinnamon;                            // Declara una variable para el símbolo de la operación
        int num1, num2;                           // Declara variables para los números

        cout << "--------------------- Ejercicios Laboratorio IV ---------------------" << endl;
        cout << "\nOperacion " << i + 1 << ":\n"; // Cada operacion i = +1, hasta cumplir el bucle
        cout << "Ingrese el primer dato: ";
        cin >> num1;

        cout << "Ingrese el segundo dato: ";
        cin >> num2;

        cout << "Selecciona la operacion (+, -, *, /, %): "; // Esto lo puedes cambiar al menú que prefieras, solo recuerda siempre llamar la función char
        cin >> Cinnamon;

        int resultado = realizarOperacion(num1, num2, Cinnamon); // Realiza la operación y almacena el resultado
        imprimirResultado(resultado);                            // Imprime el resultado
    }

    return 0;
}

// Función para realizar operaciones matemáticas
int realizarOperacion(int num1, int num2, char Cinnamon) // Trae los parámetros antes establecidos
{
    switch (Cinnamon) // Switch para determinar la operación
    {
    case '+': // Suma
        return num1 + num2;
    case '-': // Resta
        return num1 - num2;
    case '*': // Multiplicación
        return num1 * num2;
    case '/': // División
        if (num2 != 0)
            return num1 / num2;
        else
        {
            cout << "Error: Division por cero.\n";
            return 0;
        }
    case '%': // Módulo
        if (num2 != 0)
            return num1 % num2;
        else
        {
            cout << "Error: Division por cero.\n";
            return 0;
        }
    default: // Operación no reconocida
        cout << "Operacion no reconocida.\n";
        return 0;
    }
}

// Función para imprimir resultados
int imprimirResultado(int resultado)
{
    cout << "El resultado de la operacion es: " << resultado << endl; // Imprime el resultado
    return resultado;                                                 // Retorna el resultado
}

// int realizarOperacion(int num1, int num2, char Cinnamon); En C++, los paréntesis () se utilizan en la declaración y definición de funciones
// para indicar los parámetros que la función espera recibir al ser llamada.

// Dentro de los paréntesis (), indicamos los parámetros que la función espera recibir cuando se llame.
