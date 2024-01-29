#include <iostream>
#include <locale.h>
#include <math.h>
#include <conio.h>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Spanish");
    bool quit = false;
    int eleccion = 0;

    do
    {
        cout << "--------------------- Ejercicios Laboratorio II ---------------------" << endl;
        cout << "1) Numero par o impar" << endl;
        cout << "2) Bisiesto" << endl;
        cout << "3) Numeros iguales" << endl;
        cout << "4) Mayor o menor de edad" << endl;
        cout << "5) Aprobado o reprobado" << endl;

        cout << "\n\n Escoje el número de ejercicio a realizar: " << endl;
        cin >> eleccion;

        switch (eleccion)
        {
        // ejercicio 1
        case 1:
        {
            int numero;
            cout << "\nIngrese un número: ";
            cin >> numero;

            // Confirma si el número x, es divisible entre 2
            if (numero % 2 == 0)
            {
                cout << "El número " << numero << " es par.\n\n"
                     << endl;
            }
            else
            {
                cout << "El número " << numero << " no es par.\n\n"
                     << endl;
            }
            break;
        }

        // ejercicio 2
        case 2:
        {
            int anio;
            cout << "Ejercicio 2) \n Crea un programa que determine si un año ingresado es bisiesto o no." << endl;

            cout << "Introduce año: ";
            cin >> anio;

            if (anio % 4 == 0 and anio % 100 != 0 or anio % 400 == 0)
            {
                cout << "Este año es bisiesto.\n\n"
                     << endl;
            }
            else
            {
                cout << " Este año no es bisiesto.\n\n"
                     << endl;
            }
            break;
        }

        // ejercico 3
        case 3:
        {
            int num1, num2;
            cout << "Ejercicio 3) \n Desarrolla un programa que solicite al usuario dos números y determine si son iguales." << endl;
            cout << "\nIngrese el primer número:" << endl;
            cin >> num1;
            cout << "\nIngrese el segundo número:" << endl;
            cin >> num2;

            if (num1 == num2)
            {
                cout << "Los numeros son iguales.\n\n"
                     << endl;
            }
            else
            {
                cout << "Los numeros no son iguales.\n\n"
                     << endl;
            }
            break;
        }

        // ejercicio 4
        case 4:
        {
            int edad;
            cout << "Ejercicio 4) \n Realiza un programa que pida al usuario su edad y verifique si es mayor de edad (18 años o más)." << endl;
            cout << "\nIngresa tu edad:" << endl;
            cin >> edad;
            if (edad >= 18)
            {
                cout << "Usted es mayor de edad. \n\n";
            }
            else if (edad < 18)
            {
                cout << "Usted es menor de edad. \n\n";
            }
            break;
        }

        // ejercicio 5
        case 5:
        {
            int nota;
            cout << "Ejercicio 5) \n Implementa un programa que evalúe si un estudiante aprobó un examen, considerando que la calificación de aprobación es 60 o más" << endl;
            cout << "\nIngrese la nota: ";
            cin >> nota;
            if (nota >= 0 && nota <= 100)
            {
                if (nota >= 60)
                {
                    cout << "El estudiante ha aprobado.\n\n";
                }
                else
                {
                    cout << "El estudiante ha reprobado.\n\n";
                }
            }
            else
            {
                cout << "Nota inválida. Ingrese una nota entre 0 y 100.\n\n";
            }
            break;
        }

        default:
            cout << "Opción inválida." << endl;
            break;
        }

    } while (eleccion != 6);

    cout << "FIN DE PROGRAMA" << endl;
    return 0;
}
