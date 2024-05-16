#include <iostream>
#include <stack>
#include <queue>
#include <list>

using namespace std;

// Estructura de datos para las tareas
struct Tarea
{
    string descripcion;
    //... otros campos si fuera necesario
};

// Implementación de la pila para almacenar tareas
stack<Tarea> pila;

// Implementación de la cola para almacenar tareas
queue<Tarea, list<Tarea>> cola;

// Función para agregar una nueva tarea
void agregarTarea()
{
    // Crear una nueva tarea
    Tarea nuevaTarea;

    // Solicitar al usuario que ingrese la descripción de la tarea
    cout << "Ingrese la descripcion de la tarea: ";
    cin >> nuevaTarea.descripcion;

    // Agregar la nueva tarea a la pila y a la cola
    pila.push(nuevaTarea);
    cola.push(nuevaTarea);

    // Informar al usuario que la tarea ha sido agregada correctamente
    cout << "Tarea agregada correctamente.\n";
}

// Función para completar y eliminar la última tarea de la pila
void completarUltimaTarea()
{
    // Verificar si la pila no está vacía
    if (!pila.empty())
    {
        // Completar y eliminar la última tarea de la pila
        pila.pop();
        cout << "Ultima tarea completada y eliminada.\n";
    }
    else
    {
        // Informar al usuario si no hay tareas para completar
        cout << "No hay tareas para completar.\n";
    }
}

// Función para atender y eliminar la tarea más antigua de la cola
void atenderTareaAntigua()
{
    // Verificar si la cola no está vacía
    if (!cola.empty())
    {
        // Atender y eliminar la tarea más antigua de la cola
        cola.pop();
        cout << "Tarea mas antigua atendida y eliminada.\n";
    }
    else
    {
        // Informar al usuario si no hay tareas para atender
        cout << "No hay tareas para atender.\n";
    }
}

// Función para mostrar todas las tareas de la pila
void mostrarTareas()
{
    // Mostrar todas las tareas en la lista
    cout << "Tareas en la lista:\n";

    // Mientras la pila no esté vacía, mostrar y eliminar las tareas una por una
    while (!pila.empty())
    {
        cout << pila.top().descripcion << "\n";
        pila.pop();
    }

    // Volver a llenar la pila con las tareas de la cola para mantener el orden original
    while (!cola.empty())
    {
        pila.push(cola.front());
        cola.pop();
    }
}

int main()
{
    char opcion;

    // Ciclo que muestra el menú de opciones y maneja las operaciones según la selección del usuario
    do
    {
        // Mostrar el menú de opciones al usuario
        cout << "\tMenu de opciones\n";
        cout << "------------------------" << endl;
        cout << "1. Agregar tarea\n";
        cout << "2. Completar ultima tarea\n";
        cout << "3. Atender tarea mas antigua\n";
        cout << "4. Mostrar todas las tareas\n";
        cout << "5. Salir\n";
        cout << "Ingrese la opcion deseada: ";

        // Leer la opción ingresada por el usuario
        cin >> opcion;

        // Realizar la operación correspondiente según la opción seleccionada
        switch (opcion)
        {
        case '1':
            agregarTarea();
            break;
        case '2':
            completarUltimaTarea();
            break;
        case '3':
            atenderTareaAntigua();
            break;
        case '4':
            mostrarTareas();
            break;
        case '5':
            cout << "Saliendo del programa...\n";
            break;
        default:
            cout << "Opcion no valida.\n";
        }

    } while (opcion != '5'); // Repetir el ciclo hasta que el usuario seleccione la opción de salir (5)

    return 0;
}
