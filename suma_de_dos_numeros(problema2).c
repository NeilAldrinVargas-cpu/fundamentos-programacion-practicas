#include <stdio.h>

int main() {
    // Declaración de variables según la Tabla de Objetos
    int n1, n2, suma;

    // Entrada de datos
    printf("--- SISTEMA DE SUMA ---\n");
    printf("Ingrese el primer numero entero: ");
    scanf("%d", &n1);

    printf("Ingrese el segundo numero entero: ");
    scanf("%d", &n2);

    // Proceso (Operación)
    suma = n1 + n2;

    // Salida de resultados
    printf("\n---------------------------\n");
    printf("El resultado de la suma es: %d\n", suma);
    printf("---------------------------\n");

    return 0;
}
