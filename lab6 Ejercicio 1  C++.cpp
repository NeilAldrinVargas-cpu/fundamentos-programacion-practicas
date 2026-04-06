#include <iostream>
using namespace std;

int main() {
    int suma = 0;

    for (int i = 1; i <= 10; i++) {
        suma += i; // Es lo mismo que: suma = suma + i
    }

    cout << "La suma del 1 al 10 es: " << suma << endl;

    return 0;
}
