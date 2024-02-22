#include <iostream> // Incluye la biblioteca iostream para operaciones de entrada/salida
#include <cmath>    // Incluye la biblioteca cmath para operaciones matemáticas
#include <stdio.h>  // Se utiliza para imprimir por pantalla

using namespace std; // Usa el espacio de nombres estándar

int Numeros();
int Factorial();
void Contador();
int OrdenDeNumeros();
int SumaDeEnteros();

int main()
{
    int Millie;
    setlocale(LC_ALL, "Spanish"); // Establecer el locale a español

    do
    {
        cout << "\t\t--------------------- Ejercicios Laboratorio V ---------------------\n" // Imprime el menú
             << endl;

        cout << "\t1) Suma de numeros pares e impares\n"
             << endl;
        cout << "\t2) Factorial con bucle\n"
             << endl;
        cout << "\t3) Contador de digitos\n"
             << endl;
        cout << "\t4) Ordenamiento de numeros (ascendente)\n"
             << endl;
        cout << "\t5) Suma de digitos de un numero\n"
             << endl;

        cout << "\tElije una opcion: \n"; // Lee la opción elegida por el usuario y llama cada función
        cin >> Millie;

        switch (Millie)
        {
        case 1:
            Numeros();
            break;

        case 2:
            Factorial();
            break;

        case 3:
            Contador();
            break;

        case 4:
            OrdenDeNumeros();
            break;

        case 5:
            SumaDeEnteros();
            break;

        default:
            cout << "Opcion incorrecta.\n"
                 << endl;
            break;
        }
    } while (Millie != 7); // Repite el bucle hasta que el usuario elija la opción 7
    return 0;
}

int Numeros()
{
    int suma = 0; // Variable que almacena la suma
    int s;        // El número hasta el cual se sumarán los números pares o impares
    bool par;     // Variable que almacena la opción de sumar pares o impares

    cout << "Ingrese un numero entero: ";
    cin >> s;

    cout << "Desea sumar los numeros pares? (1 para si, 0 para no): ";
    cin >> par;

    // for (inicialización; condición; expresión de iteración) - Forma  de un bucle for en palabras
    // i <= s: Evalúa  la condición mientras i sea menor o igual que s. Mientras esta condición sea verdadera, el bucle continuará ejecutándose
    // i++ : Incrementa en uno el valor de i cada vez que se evalúa la condición.
    for (int i = 1; i <= s; i++)
    { // Bucle que recorre los números desde 1 hasta s
        if (par && i % 2 == 0)
        {              // Se suman los pares y el número actual es par
            suma += i; // Se añade el número a la suma
        }
        else if (!par && i % 2 != 0)
        {              // Se suman los impares y el número actual es impar
            suma += i; // Se añade el número a la suma
        }
    }
    // Mostramos el resultado de la suma
    cout << "La suma de los numeros ";
    if (par)
    {
        cout << "pares ";
    }
    else
    {
        cout << "impares ";
    }
    cout << "hasta " << s << " es: " << suma << endl;

    return suma; // Se devuelve la suma
}

int Factorial()
{
    // Variable para el factorial
    int n;

    cout << "Ingrese un numero entero positivo para calcular su factorial: ";
    cin >> n;

    // Ver si la entrada válida
    if (n < 0)
    {
        cout << "No se puede calcular el factorial de un numero negativo" << endl;
        return -1; // Devolver un valor indicativo de error
    }

    // Inicializar el resultado del factorial
    int resultado = 1;

    // Bucle while para calcular el factorial
    while (n > 1)
    {
        resultado *= n; // Multiplicar el resultado por n
        n--;            // Decrementar n en 1. En otras palabras, el valor de n en 1 en cada iteración del bucle, de modo que
                        // el bucle se repita hasta que n alcance el valor de 1.
    }

    // Imprimir el resultado del factorial
    cout << "El factorial es: " << resultado << endl;

    // Devolver el resultado del factorial
    return resultado;
}

void Contador() // Se utiliza "void" ya que se indica que la función no devuelve ningún valor.
{
    // Variable para los números ingresados
    int Melody;
    cout << "Cuantos numeros: ";
    cin >> Melody; // Cantidad de números ingresados por el usuario y la almacena en la variable "Melody"

    for (int i = 0; i < Melody; ++i) // Bucle que se ejecuta "Melody" veces
    {
        // Declara una variable para almacenar el número ingresado por el usuario en cada iteración
        int numero;
        cout << "Ingrese un numero: ";
        cin >> numero;

        int digitos = 0;  // Inicializa una variable para contar la cantidad de dígitos del número
        int num = numero; // Crea una copia del número ingresado para preservar su valor original

        // Bucle "do-while" que cuenta la cantidad de dígitos del número
        do
        {
            num /= 10;      // Divide el número entre 10 en cada iteración para eliminar el último dígito
            digitos++;      // Incrementa en uno la cantidad de dígitos en cada iteración
        } while (num != 0); // Continúa el bucle mientras el número sea diferente de cero, es decir, aún tiene dígitos

        // Muestra la cantidad de dígitos del número ingresado por el usuario
        cout << "El numero " << numero << " tiene " << digitos << " digitos " << endl;
    }
}

int OrdenDeNumeros()
{
    int a, b, c, husk; // Declarar las variables para los tres números y una auxiliar (husk) para el intercambio

    // Solicitar al usuario que ingrese los tres números
    cout << "Ingrese el primer numero: ";
    cin >> a;
    cout << "Ingrese el segundo numero: ";
    cin >> b;
    cout << "Ingrese el tercer numero: ";
    cin >> c;

    // Usar un bucle for para ordenar los números
    for (int i = 0; i < 3; i++) // Establece el bucle para repetirse tres veces, hasta que "i" sea menor que 3 y en cada iteración, i se incrementa en 1.
    {                           // Repetir el proceso tres veces
        // Comparar el primer y el segundo número
        if (a > b)
        {
            // Si el primero es mayor que el segundo, intercambiarlos
            husk = a; // Guardar el valor de a en husk
            a = b;    // Asignar el valor de b a a
            b = husk; // Asignar el valor de husk a b
        }
        // Comparar el segundo y el tercer número
        if (b > c)
        {
            // Si el segundo es mayor que el tercero, intercambiarlos
            husk = b; // Guardar el valor de b en husk
            b = c;    // Asignar el valor de c a b
            c = husk; // Asignar el valor de husk a c
        }
    }

    // Mostrar el resultado por pantalla
    cout << "Los numeros ordenados son: " << a << ", " << b << ", " << c << endl;

    return 0;
}

int SumaDeEnteros()
{
    // Ingresar un número entero
    int numero;
    cout << "Ingrese un numero entero: ";
    cin >> numero;

    // Inicializar la variable suma en 0 para almacenar la suma de los dígitos
    int suma = 0;

    // Usar un bucle while para dividir el número entre 10 y sumar el resto
    while (numero > 0)
    {
        suma += numero % 10; // Sumar el último dígito del número
        numero /= 10;        // Eliminar el último dígito del número
    }

    // Mostrar el resultado por pantalla
    cout << "La suma de los digitos es: " << suma << endl;

    return 0;
}