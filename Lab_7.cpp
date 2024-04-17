#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

// Se utiliza " void" porque la funciones del menú realizan acciones específicas, entonces estas funciones no necesitan devolver un valor específico al programa principal.
void archivos();
void objetos();
void instanciacion();
void com();
void bibliotecas();
void ordenamiento();

int main()
{
    int opcion;
    do
    {
        // Menú
        cout << "------ Laboratorio No. 7 ------" << endl;
        cout << "1. Manipulacion de archivos" << endl;
        cout << "2. Programacion orientada a objetos" << endl;
        cout << "3. Abstraccion e instanciacion" << endl;
        cout << "4. Clases, objetos y métodos" << endl;
        cout << "5. Bibliotecas estandar" << endl;
        cout << "6. Algoritmo de ordenamiento" << endl;
        cout << "0. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        // Ejecutar la opción seleccionada
        switch (opcion)
        {
        case 1:
            archivos();
            break;
        case 2:
            objetos();
            break;
        case 3:
            instanciacion();
            break;
        case 4:
            com();
            break;
        case 5:
            bibliotecas();
            break;
        case 6:
            ordenamiento();
            break;
        case 0:
            cout << "Saliendo del programa." << endl;
            break;
        default:
            cout << "Intente de nuevo." << endl;
            break;
        }
    } while (opcion != 0);

    return 0;
}

// Implementación de las funciones para cada opción del menú
void archivos()
{
    // Solicitar al usuario los datos y almacenarlos en un archivo
    ofstream archivo_salida("c:\\Laboratorio.txt");
    if (archivo_salida.is_open()) // Verifica si el archivo se abrió correctamente
    {
        string nombre;
        int edad;

        cout << "Ingrese los datos de las personas (nombre y edad). Para finalizar, escriba 'fin'." << endl;

        while (true) // Bucle para solicitar datos continuamente
        {
            // Pedir nombre
            cout << "Nombre: ";
            getline(cin, nombre);

            // Verificar si es el fin
            if (nombre == "fin")
            {
                break;
            }

            // Pedir edad
            cout << "Edad: ";
            cin >> edad;
            cin.ignore(); // Limpiar el buffer de entrada

            // Escribir en el archivo
            archivo_salida << nombre << "," << edad << endl;
        }

        archivo_salida.close();
    }
    else
    {
        cerr << "Error al abrir el archivo para escritura." << endl;
        return;
    }

    // Leer y mostrar los datos del archivo
    ifstream archivo_entrada("c:\\Laboratorio.txt");
    if (archivo_entrada.is_open())
    {
        cout << "Datos almacenados en el archivo:" << endl;
        string linea;
        while (getline(archivo_entrada, linea)) // Lee cada línea del archivo
        {
            cout << linea << endl; // Muestra la línea en la consola
        }
        archivo_entrada.close(); // Cierra el archivo después de leer los datos
    }
    else
    {
        cerr << "Error al abrir el archivo para lectura." << endl;
        return;
    }
}

void objetos()
{
    // Definición de la clase Persona
    class Persona
    {
    private:
        string nombre;
        int edad;
        string ocupacion;

    public:
        // Constructor
        Persona(string _nombre, int _edad, string _ocupacion) : nombre(_nombre), edad(_edad), ocupacion(_ocupacion) {}

        // Métodos para establecer los valores de los atributos
        void setNombre(string _nombre)
        {
            nombre = _nombre;
        }

        void setEdad(int _edad)
        {
            edad = _edad;
        }

        void setOcupacion(string _ocupacion)
        {
            ocupacion = _ocupacion;
        }

        // Métodos para obtener los valores de los atributos
        string getNombre() const
        {
            return nombre;
        }

        int getEdad() const
        {
            return edad;
        }

        string getOcupacion() const
        {
            return ocupacion;
        }

        // Método para mostrar la información de la persona
        void mostrarInformacion() const
        {
            cout << "Nombre: " << nombre << endl;
            cout << "Edad: " << edad << endl;
            cout << "Ocupación: " << ocupacion << endl;
        }
    };

    //  // Crea un objeto Persona con los datos
    Persona persona1("Marcela", 33, "Accionista principal");
    Persona persona2("Armando", 31, "Presidente empresarial");

    // Mostrar información de las personas
    cout << "Información de la persona 1:" << endl;
    persona1.mostrarInformacion();
    cout << endl;

    cout << "Información de la persona 2:" << endl;
    persona2.mostrarInformacion();
    cout << endl;

    // Modificar información de las personas
    persona1.setEdad(34);
    persona2.setOcupacion("Gerente");

    // Mostrar la información actualizada
    cout << "Información actualizada de la Persona 1:" << endl;
    persona1.mostrarInformacion();
    cout << endl;

    cout << "Información actualizada de la Persona 2:" << endl;
    persona2.mostrarInformacion();
}

// La abstracción en programación orientada a objetos se refiere al proceso de identificar las características esenciales de un objeto del mundo real y modelarlas de manera abstracta en un programa.
void instanciacion()
{
    // Definición de la clase Persona
    class Persona
    {
    private:
        string nombre;
        int edad;
        string ocupacion;

    public:
        Persona(string _nombre, int _edad, string _ocupacion) : nombre(_nombre), edad(_edad), ocupacion(_ocupacion) {}

        void setNombre(string _nombre)
        {
            nombre = _nombre;
        }

        void setEdad(int _edad)
        {
            edad = _edad;
        }

        void setOcupacion(string _ocupacion)
        {
            ocupacion = _ocupacion;
        }

        string getNombre() const
        {
            return nombre;
        }

        int getEdad() const
        {
            return edad;
        }

        string getOcupacion() const
        {
            return ocupacion;
        }

        void mostrarInformacion() const
        {
            cout << "Nombre: " << nombre << endl;
            cout << "Edad: " << edad << endl;
            cout << "Ocupación: " << ocupacion << endl;
        }
    };

    // Crear objetos de la clase Persona
    Persona persona1("Marcela", 33, "Accionista principal");
    Persona persona2("Armando", 31, "Presidente empresarial");

    // Mostrar información de las personas
    cout << "Información de la Persona 1:" << endl;
    persona1.mostrarInformacion();
    cout << endl;

    cout << "Información de la Persona 2:" << endl;
    persona2.mostrarInformacion();
    cout << endl;
}

void com()
{
    // Definición de la clase
    class Persona
    {
    protected:
        string nombre;
        int edad;
        string ocupacion;

    public: // Constructor de Persona
        Persona(string _nombre, int _edad, string _ocupacion) : nombre(_nombre), edad(_edad), ocupacion(_ocupacion) {}

        // Métodos para establecer los valores de los atributos
        void setNombre(string _nombre)
        {
            nombre = _nombre;
        }

        void setEdad(int _edad)
        {
            edad = _edad;
        }

        // Métodos para obtener los valores de los atributos
        void setOcupacion(string _ocupacion)
        {
            ocupacion = _ocupacion;
        }

        string getNombre() const
        {
            return nombre;
        }

        int getEdad() const
        {
            return edad;
        }

        string getOcupacion() const
        {
            return ocupacion;
        }

        void mostrarInformacion() const
        {
            cout << "Nombre: " << nombre << endl;
            cout << "Edad: " << edad << endl;
            cout << "Ocupación: " << ocupacion << endl;
        }
    };

    // Definición de la clase Estudiante que hereda de Persona
    class Estudiante : public Persona
    {
    private:
        int numero_estudiante;
        float promedio_calificaciones;

    public: // Constructor de Estudiante que llama al constructor de Persona
        Estudiante(string _nombre, int _edad, string _ocupacion, int _numero_estudiante, float _promedio_calificaciones)
            : Persona(_nombre, _edad, _ocupacion), numero_estudiante(_numero_estudiante), promedio_calificaciones(_promedio_calificaciones) {}

        // Método para establecer el número de estudiante
        void setNumeroEstudiante(int _numero_estudiante)
        {
            numero_estudiante = _numero_estudiante;
        }

        void setPromedioCalificaciones(float _promedio_calificaciones)
        {
            promedio_calificaciones = _promedio_calificaciones;
        }

        int getNumeroEstudiante() const
        {
            return numero_estudiante;
        }

        float getPromedioCalificaciones() const
        {
            return promedio_calificaciones;
        }

        // Método para mostrar la información del estudiante
        void mostrarInformacion() const
        {
            Persona::mostrarInformacion(); // Llamada al método de la clase base para mostrar la información de la persona
            cout << "Número de estudiante: " << numero_estudiante << endl;
            cout << "Promedio de calificaciones: " << promedio_calificaciones << endl;
        }
    };
    // Crear objeto de la clase Estudiante
    Estudiante estudiante("Wade", 20, "Estudiante", 48592, 6.5);

    // Utilizar métodos heredados y propios
    estudiante.mostrarInformacion();
}

void bibliotecas()
{
}

void ordenamiento()
{
    // Lista de nombres de estudiantes
    vector<string> nombres = {"Charlie", "Husk", "Alastor", "Rosie", "Carmilla"};

    // Algoritmo de ordenamiento de burbuja
    int n = nombres.size();         // Obtener el tamaño de la lista de nombres
    for (int i = 0; i < n - 1; ++i) // Bucle externo para iterar sobre la lista
    {
        for (int j = 0; j < n - i - 1; ++j) // Bucle interno para comparar elementos y hacer swaps
        {
            if (nombres[j] > nombres[j + 1]) // Comparar nombres adyacentes
            {
                // Intercambiar nombres si el nombre actual es mayor que el siguiente
                string temp = nombres[j];
                nombres[j] = nombres[j + 1];
                nombres[j + 1] = temp;
            }
        }
    }

    // Mostrar los nombres ordenados
    cout << "Nombres de estudiantes ordenados:" << endl;
    for (const string &nombre : nombres) // Iterar sobre la lista ordenada
    {
        cout << nombre << endl;
    }
}
