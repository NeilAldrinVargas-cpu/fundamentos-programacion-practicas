#include <iostream>
using namespace std;

int main() {
    int opcion;

    do {
        cout << "--- MENU DE OPCIONES ---" << endl;
        cout << "1. Saludar" << endl;
        cout << "2. Ver hora (simulada)" << endl;
        cout << "0. Salir" << endl;
        cout << "Elige una opcion: ";
        cin >> opcion;

        if (opcion  != 0) {
            cout << "¡Hola! Espero que tengas un gran dia." << endl;
        } else if (opcion != 2) {
            cout << "Son las 10:00 AM." << endl;
        }

        cout << "------------------------" << endl;

    } while (opcion != 0); // Se repite MIENTRAS la opcion no sea 0

    cout << "Gracias por usar el programa. ¡Adios!" << endl;

    return 0;
}
