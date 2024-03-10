#include <iostream>
#include <string>

using namespace std;

// Declaraciones de funciones
void mostrarMenu();
void EjercicioLibro();
void EjercicioEstudiante();
void EjercicioCalculadora();
void EjercicioCuentaBancaria();
void EjercicioPelicula();

int main()
{
    int opcion;
    do
    {
        mostrarMenu();
        cout << "Opcion: ";
        cin >> opcion;
        switch (opcion)
        {
        case 1:
            EjercicioLibro();
            break;
        case 2:
            EjercicioEstudiante();
            break;
        case 3:
            EjercicioCalculadora();
            break;
        case 4:
            EjercicioCuentaBancaria();
            break;
        case 5:
            EjercicioPelicula();
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

// Función para mostrar el menú
void mostrarMenu()
{
    cout << "-------Seleccione una opción-------" << endl;
    cout << "1. Gestión de libros en una biblioteca" << endl;
    cout << "2. Registro de estudiantes" << endl;
    cout << "3. Calculadora simple" << endl;
    cout << "4. Gestión de cuentas bancarias" << endl;
    cout << "5. Registro de películas" << endl;
    cout << "0. Salir" << endl;
}

// Definición de las clases
class Libro
{
private:
    string titulo;
    string autor;
    int anioPublicacion;

public:
    Libro() : anioPublicacion(0) {}
    Libro(string _titulo, string _autor, int _anioPublicacion)
        : titulo(_titulo), autor(_autor), anioPublicacion(_anioPublicacion) {}

    void setTitulo(const string &_titulo)
    {
        titulo = _titulo;
    }

    void setAutor(const string &_autor)
    {
        autor = _autor;
    }

    void setAnioPublicacion(int _anioPublicacion)
    {
        anioPublicacion = _anioPublicacion;
    }

    string getTitulo() const
    {
        return titulo;
    }

    string getAutor() const
    {
        return autor;
    }

    int getAnioPublicacion() const
    {
        return anioPublicacion;
    }

    void mostrarInformacion() const
    {
        cout << "Título: " << titulo << endl;
        cout << "Autor: " << autor << endl;
        cout << "Año de Publicación: " << anioPublicacion << endl;
    }
};

class Estudiante
{
private:
    string nombre;
    string apellido;
    int edad;
    int curso;

public:
    Estudiante(string _nombre, string _apellido, int _edad, int _curso)
        : nombre(_nombre), apellido(_apellido), edad(_edad), curso(_curso) {}

    void setNombre(const string &_nombre)
    {
        nombre = _nombre;
    }

    void setApellido(const string &_apellido)
    {
        apellido = _apellido;
    }

    void setEdad(int _edad)
    {
        edad = _edad;
    }

    void setCurso(int _curso)
    {
        curso = _curso;
    }

    string getNombre() const
    {
        return nombre;
    }

    string getApellido() const
    {
        return apellido;
    }

    int getEdad() const
    {
        return edad;
    }

    int getCurso() const
    {
        return curso;
    }

    void mostrarInformacion() const
    {
        cout << "Nombre: " << nombre << endl;
        cout << "Apellido: " << apellido << endl;
        cout << "Edad: " << edad << endl;
        cout << "Curso: " << curso << endl;
    }
};

class Calculadora
{
public:
    void setNumeros(float num1, float num2)
    {
        numero1 = num1;
        numero2 = num2;
    }

    float suma()
    {
        return numero1 + numero2;
    }

    float resta()
    {
        return numero1 - numero2;
    }

    float multiplicacion()
    {
        return numero1 * numero2;
    }

    float division()
    {
        if (numero2 != 0)
        {
            return numero1 / numero2;
        }
        else
        {
            cout << "Error: División por cero." << endl;
            return 0;
        }
    }

private:
    float numero1;
    float numero2;
};

class CuentaBancaria
{
private:
    string nombreTitular;
    string numeroCuenta;
    double saldo;

public:
    CuentaBancaria(string _nombreTitular, string _numeroCuenta, double _saldo)
        : nombreTitular(_nombreTitular), numeroCuenta(_numeroCuenta), saldo(_saldo) {}

    void depositar(double cantidad)
    {
        saldo += cantidad;
        cout << "Depósito de $" << cantidad << " realizado. Nuevo saldo: $" << saldo << endl;
    }

    void retirar(double cantidad)
    {
        if (cantidad <= saldo)
        {
            saldo -= cantidad;
            cout << "Retiro de $" << cantidad << " realizado. Nuevo saldo: $" << saldo << endl;
        }
        else
        {
            cout << "Saldo insuficiente para realizar el retiro." << endl;
        }
    }

    double consultarSaldo() const
    {
        return saldo;
    }
};

class Pelicula
{
private:
    string titulo;
    string director;
    int anioLanzamiento;

public:
    Pelicula(string _titulo, string _director, int _anioLanzamiento)
        : titulo(_titulo), director(_director), anioLanzamiento(_anioLanzamiento) {}

    void setTitulo(const string &_titulo)
    {
        titulo = _titulo;
    }

    void setDirector(const string &_director)
    {
        director = _director;
    }

    void setAnioLanzamiento(int _anioLanzamiento)
    {
        anioLanzamiento = _anioLanzamiento;
    }

    string getTitulo() const
    {
        return titulo;
    }

    string getDirector() const
    {
        return director;
    }

    int getAnioLanzamiento() const
    {
        return anioLanzamiento;
    }

    void mostrarInformacion() const
    {
        cout << "Título: " << titulo << endl;
        cout << "Director: " << director << endl;
        cout << "Año de Lanzamiento: " << anioLanzamiento << endl;
    }
};

// Funciones para ejecutar los ejercicios individualmente
void EjercicioLibro()
{
    Libro libro("El Principito", "Antoine de Saint-Exupéry", 1943);
    cout << "Información del Libro:" << endl;
    libro.mostrarInformacion();
}

void EjercicioEstudiante()
{
    Estudiante estudiante("Stephanie", "Argueta", 19, 100);
    cout << "Información del Estudiante:" << endl;
    estudiante.mostrarInformacion();
}

void EjercicioCalculadora()
{
    Calculadora calc;
    float num1, num2;
    cout << "Ingrese el primer número: ";
    cin >> num1;
    cout << "Ingrese el segundo número: ";
    cin >> num2;
    calc.setNumeros(num1, num2);
    cout << "Suma: " << calc.suma() << endl;
    cout << "Resta: " << calc.resta() << endl;
    cout << "Multiplicacion: " << calc.multiplicacion() << endl;
    cout << "Division: " << calc.division() << endl;
}

void EjercicioCuentaBancaria()
{
    CuentaBancaria cuenta("Stephanie Argueta", "1287946810", 1000);
    cuenta.depositar(500);
    cuenta.retirar(200);
    cuenta.retirar(1500);
    cout << "Saldo actual: $" << cuenta.consultarSaldo() << endl;
}

void EjercicioPelicula()
{
    Pelicula pelicula("la familia del futuro", "Stephen J. Anderson", 2007);
    cout << "Información de la Película:" << endl;
    pelicula.mostrarInformacion();
}
