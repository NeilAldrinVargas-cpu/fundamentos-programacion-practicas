#include <iostream>
using namespace std;

int main() {
    int contador = 5;

    // Mientras el contador sea mayor que 0, el ciclo sigue
    while (contador > 0) {
        cout << "Cuenta regresiva: " << contador << endl;

        // Es vital restar 1, si no, el ciclo sería infinito
        contador--;
    }

    cout << "¡Despegue!" << endl;

    return 0;
}
