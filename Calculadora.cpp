#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    char op;

    cout << "ingrese 2 números" << endl;
    cin >> num1 >> num2;12

    cout << "¿Qué función quieres realizar? suma(+); resta(-); división(/); multiplicación(*)" << endl;
    cin >> op;

    switch (op) {
        case '+':
            cout << num1 + num2;
            break;
        case '-':
             cout << num1 - num2;
             break;
        case '*':
            cout << num1 * num2;
            break;
        case '/':
            if (num2 != 0)
            cout << num1 / num2;
            else
            cout << "Error: no se puede con 0";
            break;
        default:
        cout << "invalido";
        break;
    }
    return 0;

}

