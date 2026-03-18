#include <stdio.h>

int main() {
    int num;

    printf("--- DETECTOR DE NUMERO PAR O IMPAR ---\n");

    // Entrada de datos
    printf("Ingrese un numero entero: ");
    scanf("%d", &num);

    // Proceso y Salida
    printf("\n--------------------------------------\n");
    if (num % 2 == 0) {
        printf("El numero %d es: PAR\n", num);
    } else {
        printf("El numero %d es: IMPAR\n", num);
    }
    printf("--------------------------------------\n");

    return 0;
}
