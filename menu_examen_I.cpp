//Escribe una función en C++ llamada esPrimo que reciba un número entero como parámetro y devuelva 
//true si es primo y false si no lo es. Luego, en el main(), pide al usuario un número y muestra si es primo o no.


//2. Escribe un programa en C++ que calcule la raíz cuadrada de un número ingresado por el usuario
// utilizando la función sqrt() de la biblioteca cmath. Asegúrate de incluir la biblioteca correspondiente.

// 3. Escribe un programa en C++ que declare dos variables enteras, a y b, y calcule la suma, resta, multiplicación y división de estas variables. Muestra los resultados por pantalla.

// 4. Escribe un programa en C++ que solicite al usuario un número entero positivo n y muestre la suma de todos los números enteros desde 1 hasta n.

 
#include <locale.h>
#include <math.h>
#include <cmath>
#include <conio.h>
#include<iostream> 
using namespace std;

int main()
bool esPrimo();
int raizCuadrada();
int calculadora();
int suma();

int main()
{
    setlocale(LC_ALL, "Spanish"); 
    int dust;

    do
    {
        // 5. menú de opciones
        cout << "--------------------- Ejercicios Laboratorio III ---------------------" << endl;
        cout << "1) Numeros Primos" << endl;
        cout << "2) Raiz cuadrada " << endl;
        cout << "3) Operaciones matematicas básicas" << endl;
        cout << "4) Suma de numeros" << endl;
        cout << "\n Escoje el numero de ejercicio a realizar: ";
        cin >> dust;

        switch (dust)
        {
        case 1:
            esPrimo();
            break;

        case 2:
            raizCuadrada();
            break;

        case 3:
            calculadora();
            break;

        case 4:
            esBisiesto();
            break;

        default:
            cout << "Error\n"
                 << endl;
            break;
        }
    } while (dust != 5); // Repite el bucle hasta que el usuario elija la opción 6

    system("pause");
    return 0;
}
// Problema #1
bool esPrimo()
{
    int idv;
    bool primo = true; 
    cout << "\n Problema 1" << endl;
    cout << "\n Escribe una función en C++ llamada esPrimo que reciba un número entero como parámetro y devuelva true si es primo y false si no lo es. Luego, en el main(), pide al usuario un número y muestra si es primo o no."
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
        cout << idv << " True" << endl;
    else
        cout << idv << " False" << endl;

    return primo;
}

// Problema 2. 
int raizCuadrada();
{
    double num;
    cout << "Escribe un programa en C++ que calcule la raíz cuadrada de un número ingresado por el usuario utilizando la función sqrt() de la biblioteca cmath. Asegúrate de incluir la biblioteca correspondiente." <<endl; 

    cout << "Ingrese un número para calcular su raíz cuadrada: "<< endl;
    cin >> num;
    
    // Verificar si el número es negativo
    if (num< 0) {
        cout << "No se puede calcular la raíz cuadrada de un número negativo." << endl;
    } else {
        // Calcular la raíz cuadrada y mostrar el resultado
        double raiz = sqrt(num);
        cout << "La raíz cuadrada de " << num << " es: " << raiz << endl;
    }
    
    return 0;
}

// Problema #3
int calculadora();
{
    int num1, num2;
    char op;
    cout << ""
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
  

int suma()
{
     int n;
    int suma = 0;
    
    // Solicitar al usuario que ingrese un número entero positivo
    cout << "Ingrese un número entero positivo: ";
    cin >> n;
    
    // Verificar si el número ingresado es positivo
    if (n <= 0) {
        cout << "El número ingresado no es válido. Debe ser un número entero positivo." << endl;
        return 1; // Salir del programa con un código de error
    }
    
    // Calcular la suma de los números enteros desde 1 hasta n
    for (int i = 1; i <= n; ++i) {
        suma += i;
    }
    
    // Mostrar la suma
    cout << "La suma de todos los números enteros desde 1 hasta " << n << " es: " << suma << endl;
    
    return 0;
}